/**
 * @param {Object | Array} obj
 * @return {boolean}
 */
var isEmpty = function(obj) {
    return JSON.stringify(obj).length==2?1:0;
};