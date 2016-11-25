
$('#collapseOne').on('hide.bs.collapse', function () {
    $('#icon1').removeClass('fa-minus');
    $('#icon1').addClass('fa-plus');
})
$('#collapseOne').on('show.bs.collapse', function () {
    $('#icon1').removeClass('fa-plus');
    $('#icon1').addClass('fa-minus');
})

$('#collapseTwo').on('hide.bs.collapse', function () {
    $('#icon2').removeClass('fa-minus');
    $('#icon2').addClass('fa-plus');
})
$('#collapseTwo').on('show.bs.collapse', function () {
    $('#icon2').removeClass('fa-plus');
    $('#icon2').addClass('fa-minus');
})

$('#collapseThree').on('hide.bs.collapse', function () {
    $('#icon3').removeClass('fa-minus');
    $('#icon3').addClass('fa-plus');
})
$('#collapseThree').on('show.bs.collapse', function () {
    $('#icon3').removeClass('fa-plus');
    $('#icon3').addClass('fa-minus');
})

$(document).scroll(
    function () {
        if ($(document).scrollTop() >= 100) {
            $('#btnUp').removeClass('invisible');
        } else {
            $('#btnUp').addClass('invisible');
        }
    }
);