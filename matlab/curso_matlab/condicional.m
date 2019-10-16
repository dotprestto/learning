for i = 1 : 6
    if i <= 2
        X(i) = 0;
    else
        X(i) = 1;
    end
end

X

for i = 1 : 8
    if i <= 2
        Y(i) = i + 10;
    elseif i <= 6
        Y(i) = i^2 - 10;
    else
        Y(i) = i;
    end
end

Y
