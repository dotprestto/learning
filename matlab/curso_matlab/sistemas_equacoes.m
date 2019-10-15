% Ax = B
% A -> termos dependentes
% x -> conjunto solução
% B -> termos independentes

% 2x + y -z = 4
% -x + y + 4z = -2
% x = 2y -2z = 5

A = [2 1 -1
    -1 1 4
    1 2 -2];

B = [4 -2 5]';

tic
x = inv(A) * B;
t1 = toc;

tic
x = A\B;
t2 = toc;

fprintf('           t1             t2\n');
fprintf('Tempo:  %6.6f       %6.6f  \n', t1, t2);
