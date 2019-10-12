const express = require('express');
const { ApolloServer, gql } = require('apollo-server-express');


const schema = gql(`
    type Query {
        olaMundo: String!
    }
`);

const resolvers = {
    Query: {
        olaMundo: () => 'Olá Mundo',
    },

};

const server = new ApolloServer({ typeDefs: schema, resolvers });

const app = express();
server.applyMiddleware({ app });

app.listen({ port: 3000 }, () => {
    console.log(`Rodando em localhost:3000${server.graphqlPath}`);
});