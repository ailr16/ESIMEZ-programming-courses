clc
clear

disp('Integrantes ')
disp('Garcia Morales Luis Adrian')
disp('Guadarrama Jimenez Oscar Luis ')
disp('4CM7')
disp(' ')

m = 1; n = 1;
a = 40; b = 20;
betax = m*pi/a;
betay = n*pi/b;
for i=1: a/40:a
    x(i) = (i/40) * a;
for j = 1: b/20:b
    y(j) = (j/20) * b;
    Ez(j,i) = sin(betax*x(i))*sin(betay*y(j));
end
end
yc = b/2;
xc = 1:a/40:a;
Ezc= 20 * sin(betax*xc) * sin(betay*yc);
[X,Y] = meshgrid(0:a,0:b);
Ezs = 10 * sin(betax.*X).*sin(betay.*Y);
subplot(3,1,1)
contour(x,y,Ez,4)
title('Ez')
ylabel('y')
axis('equal')
axis([0 a 0 b])
subplot(3,1,2)
plot(xc,Ezc)
xlabel('x')
ylabel('20*Ez,(at y = b/2)')
axis('equal')
axis([0 a 0 b])
subplot(3,1,3)
surf(Ezs)
axis([0 40 0 20 0 10])
axis('equal')
xlabel('x')
ylabel('y')
zlabel('ezs*10')

