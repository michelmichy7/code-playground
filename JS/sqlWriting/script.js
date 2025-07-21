const prompt = require('prompt-sync')();
const mariadb = require('mariadb');

let password = prompt("Enter your MariaDB password: ");
const pool = mariadb.createPool({
    host: "192.168.0.250",
    user: 'michawl',
    password: password,
    database: 'jsTest',

});

async function insertData(name) {
    let conn;
    try {
    conn = await pool.getConnection();
    console.log("Connected to the database successfully!");

    const res = await conn.query(
      "INSERT INTO users (name) VALUES (?)",
      [name]
    );


    }
    catch (err) {
        console.error("Error connecting to the database:", err);
        return;
    }
}
    insertData("Michael");