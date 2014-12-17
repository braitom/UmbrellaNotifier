# UmbrellaNotifier

## 概要
iBeacon で傘を持っていくべきかどうかを通知します。

詳しいことは[こちら]()の記事をご確認下さい。

## ビルド方法
1. ソースコードをCloneするかダウンロードして下さい。
2. CocoaPodsを使用しているのでインストールしていない場合はインストールして下さい。  
	```gem install cocoapods```   
	```pod setup```   
	詳しくは[CocoaPodsのドキュメント](http://guides.cocoapods.org/)をご覧下さい。
3. Clone or ダウンロードしたプロジェクトのフォルダにて以下のコマンドを実行して下さい。   
	```pod install```
4. ```UmbrellaNotifier.xcworkspace```ができるのでこれをXcodeで開いて下さい。
5.  ```MasterViewController.m```のwunderground.comのAPI Key、```proximityUUID```の値を自身でお持ちのBeaconのUUIDの書き換えて下さい。
6.  国と地域をお好きなモノに書き換えて下さい。
7.  ビルド実行

