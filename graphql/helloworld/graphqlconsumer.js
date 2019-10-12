const consulta = '{ olaMundo }';
const opcoes = {
    method: 'POST',
    headers: {
        'Content-Type': 'application/JSON',
    },
    body: JSON.stringify({
        query: { consulta }
    }),
}

const criaOlaMundo = (string) => {
    const body = document.querySelector('body');

    body.innerHTML = string;
}

fetch('http://localhost:3000/graphql', opcoes)
    .then(resposta => resposta.json())
    .then(dados => criaOlaMundo(dados.data
        .olaMundo));