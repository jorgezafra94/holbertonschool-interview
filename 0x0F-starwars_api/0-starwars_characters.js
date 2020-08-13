#!/usr/bin/node
/* --------------- variables declaration------------------------- */
let request = '';
let id = '';
let url = '';

/* ------------- variables assignation --------------------------- */
request = require('request');
id = process.argv[2];
url = 'https://swapi-api.hbtn.io/api/films/' + id;

/* ------------- using Promises to get async ---------- */
const myRequest = (url) => {
  return new Promise(function (resolve, reject) {
    request(url, function (error, res, body) {
      if (!error && res.statusCode === 200) {
        resolve(body);
      } else {
        reject(error);
      }
    });
  });
};

const answer = async (url) => {
  let res = await myRequest(url);
  res = JSON.parse(res).characters;
  for (let i = 0; i < res.length; i++) {
    const res2 = await myRequest(res[i]);
    console.log(JSON.parse(res2).name);
  }
};

answer(url);
