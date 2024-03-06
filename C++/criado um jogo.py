import pygame
from pygame.locals import *
from sys import exit
from random import randint

pygame.init()

largura = 640
altura = 480
X = largura / 2
Y = altura / 2
Branco = (255, 255, 255)

X_azul = randint(40, 600)
Y_azul = randint(50, 430)
Pontos = 0
fonte = pygame.font.SysFont('arial', 40, True, True)

tela = pygame.display.set_mode((largura, altura))

pygame.display.set_caption('Joguinho')
relogio = pygame.time.Clock()

while True:
    relogio.tick(75)
    tela.fill((0, 0, 0))

    for event in pygame.event.get():
        if event.type == QUIT:
            pygame.quit()
            exit()

    if pygame.key.get_pressed()[K_a]:
        X = X - 20
    if pygame.key.get_pressed()[K_d]:
        X = X + 20
    if pygame.key.get_pressed()[K_w]:
        Y = Y - 20
    if pygame.key.get_pressed()[K_s]:
        Y = Y + 20

    ret_vemelho = pygame.draw.rect(tela, (255, 0, 0), (X, Y, 40, 50))
    ret_azul = pygame.draw.rect(tela, (0, 0, 255), (X_azul, Y_azul, 40, 50))
    if ret_vemelho.colliderect(ret_azul):
        X_azul = randint(40, 600)
        Y_azul = randint(50, 430)
        Pontos = Pontos + 1

    mensagem = f'Pontos: {Pontos}'
    texto_formatado = fonte.render(mensagem, True, (Branco))
    tela.blit(texto_formatado, (450, 40))
    
    pygame.display.update()