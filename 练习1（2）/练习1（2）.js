// 社会主义核心价值观的十二个字符
const values = ['富强', '民主', '文明', '和谐', '自由', '平等', '公正', '法治', '爱国', '敬业', '诚信', '友善'];
let Index = 0;
const displayvalue = document.getElementById('value-display');

function showNextValue() {
    if (Index < values.length) {
        // 设置要显示的字符
       displayvalue.textContent = values[Index];
        // 让字符可见
       displayvalue.style.opacity = '1';

        // 设置一个定时器来实现上升淡出消失的动画效果
        setTimeout(function () {
            // 上升动画，这里简单设置每次上升一定像素，可根据实际调整
            let topPosition = 0;
            const intervalId = setInterval(function () {
                topPosition -= 5;
               displayvalue.style.top = `${topPosition}px`;

                // 同时实现淡出效果，逐渐降低透明度
               displayvalue.style.opacity = parseFloat(displayvalue.style.opacity) - 0.01;

                // 当透明度为0时，清除定时器并重置相关属性
                if (displayvalue.style.opacity <= 0) {
                    clearInterval(intervalId);
                   displayvalue.style.opacity = '0';
                   displayvalue.style.top = '0';
                   displayvalue.textContent = '';
                }
            }, 32);
        }, 500);

        Index++;
    }
}

// 给页面添加点击事件监听器，每次点击调用showNextValue函数
document.addEventListener('click', showNextValue);