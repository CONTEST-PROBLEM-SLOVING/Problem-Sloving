function CreateUid() {
    return Math.floor(Math.random()*5465).toString(16)
}

console.log(CreateUid())