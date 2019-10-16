M = [1 2 3
    4 5 6]
M(2,:)
M(:,1)

M(1,:) = 1
M(:,1) = 0

%matriz feita de outras
M1 = [1 -4; -2 3];
M2 = [0 1; 2 -1];
V1 = [0 0];
V2 = [5 5];

MM1 = [V1;M1]
MM2 = [M2 V2']
MM3 = [M1(1,:); V2]
MM4 = [M2(:,2) V2']
MM5 = [M1(1,:); M2(2,:) ; V2]

%excluir linhas e colunas

MM5(:,2) = []
MM4(1,:) = []