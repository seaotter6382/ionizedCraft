import pygame

pygame.init()
screen = pygame.display.set_mode((1280, 720))
clock = pygame.time.Clock()
runningGame = True

while runningGame:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            runningGame = False
    screen.fill("black")

    pygame.display.flip()
    clock.tick(60)
pygame.quit()