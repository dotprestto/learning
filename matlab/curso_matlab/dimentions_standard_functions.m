% dimentions
M = [1 2
    3 4];

nc = length(M)
dim =  size(M)

% standard functions
M1 = ones(2)
M2 = ones(2,3)

M3 = zeros(2)
M4 = zeros(2,3)

M5 = eye(2)
M6 = eye(2,3)

M7 = rand(2)
M8 = rand(2,3)

format rat
M9 = inv(M7) % apenas de quadradas
det(M9) % apenas quadradas

M7'
M9'
M8'