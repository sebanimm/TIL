function dataSend() {
    //1. 보낼 데이터
    var data = {
        content: $('#input-data').val(),
        completed: false
    }
    //2. api 통신
    $.ajax({
        type: 'POST',
        url: '/todo/api',
        dataType: 'json',
        contentType: 'application/json; charset=utf-8',
        data: JSON.stringify(data)
    }).done(function () {
        window.location.href = '/'
    }).fail(function (error) {
        alert(JSON.stringify(error));
    });
    //2-1. 성공했을 때
    //2-2. 실패했을
}
function deleteDate(id) {
    $.ajax({
        type:'DELETE',
        url: '/todo/api/'+id,
        contentType: 'application/json; charset=utf-8',
    }).done(function(){
        window.location.href='/'
    }).fail(function(error){
        alert(JSON.stringify(error));
    });
}