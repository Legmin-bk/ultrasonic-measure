# ultrasonic-measure

超音波で距離を測るプロジェクトです。

# 使い方

ProMicroに電力を供給すると、超音波センサで測定した距離がLCDに表示されます。

# プログラムの書き込み方

PlatformIOでプロジェクトを開くと、Arduino LeonardoやProMicroにプログラムを書き込めます。

# 材料

- [ProMicro](https://www.switch-science.com/catalog/1623/)
- [3.3Vレギュレータ](http://akizukidenshi.com/catalog/g/gI-08749/)
- [LCD](http://akizukidenshi.com/catalog/g/gM-09109/)
- [ブレッドボード](http://akizukidenshi.com/catalog/g/gP-05294/)
- [ジャンパワイヤ](http://akizukidenshi.com/catalog/g/gP-00288/)
- [超音波センサ](http://akizukidenshi.com/catalog/g/gM-11009/)

# 配線

## ProMicro周辺

ProMicro | 接続先
-------- | -----
VCC | 超音波センサのVCC、3.3VレギュレータのIN
GND | LCDのGND、超音波センサのGND、3.3VレギュレータのGND
2(SDA) | LCDのSDA
3(SCL) | LCDのSCL
6 | 超音波センサのECHO
7 | 超音波センサのTRIG

## その他

3.3VレギュレータのOUTをLCDのVDDに繋いでください。

# 参考

- [第16回 Arduinoでパーツやセンサを使ってみよう～超音波モジュール編](https://deviceplus.jp/hobby/entry016/)
- [PulseIn](https://www.arduino.cc/en/Reference.PulseIn)
