﻿#ifndef H_LANG_JA
#define H_LANG_JA

// Thanks: Eringo

#include "glyph_ja.h"

#if 0
const char *STR_JA[] = { "日本語"
// help
    , "ロード中・・・"
    , "Hボタンでヘルプを表示"
    , helpText
    , "%s@@@"
      "殺した敵数 %d@@"
      "拾ったアイテム数 %d@@"
      "シークレット %d / %d@@"
      "所要時間 %s"
    , "セーブ中・・・"
    , "セーブしました！"
    , "セーブできませんでした！"
    , "はい"
    , "いいえ"
    , "オフ"
    , "オン"
    , "オフ"
    , "Side-By-Side"
    , "Anaglyph"
    , "画面分割"
    , "VR"
    , "低"
    , "中"
    , "高"
    , STR_LANGUAGES
    , "適用"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Not Ready"
    , "Player 1"
    , "Player 2"
    , "ボタンを押してください"
    , "%s - 決定"
    , "%s - 戻る"
// inventory pages
    , "オプション"
    , "持ち物"
    , "アイテム"
// save game page
    , "セーブしますか？"
    , "現在位置"
// inventory option
    , "ゲーム"
    , "マップ"
    , "コンパス"
    , "ステータス"
    , "ララの家"
    , "詳細設定"
    , "サウンド"
    , "コントローラ"
    , "明るさ"
// passport menu
    , "ロード"
    , "新しいゲーム"
    , "リプレイ"
    , "メニューに戻る"
    , "ゲームを終わる"
    , "レベルを選択する"
// detail options
    , "ディテール調整"
    , "フィルタリング"
    , "ライティングクオリティ"
    , "シャドウクオリティ"
    , "水クオリティ"
    , "VSync"
    , "パラレルビュー"
    , "2Dアイテム"
    , "Resolution"
    , STR_SCALE
// sound options
    , "音量設定"
    , "リバーブレーション"
    , "字幕"
    , "言語"
// controls options
    , "コントローラ設定"
    , "キーボード"
    , "ゲームパッド"
    , "バイブレーション"
    , "リターゲティング"
    , "マルチエイミング"
	// mario and lara selection. thanks Eringo
    , "キャラクター"
    , "マリオ"
    , "ララ"
	, "マリオの制御"
	, "カメラ"
	, "戦車"
    // controls
    , "左", "右", "上", "下", "ジャンプ", "歩く", "アクション", "銃を抜く", "見る", "しゃがむ", "ダッシュ", "転がる", "持ち物を見る", "スタート"
    , STR_KEYS
// inventory items
    , "不明"
    , "爆弾"
    , "ピストル"
    , "ショットガン"
    , "マグナム"
    , "ウージー"
    , "ピストル弾"
    , "ショットガン弾"
    , "マグナム弾"
    , "ウージー弾"
    , "メディパック（小）"
    , "メディパック（大）"
    , "鉛の延棒"
    , "シオン"
// keys
    , "鍵"
    , "銀の鍵"
    , "錆びた鍵"
    , "金の鍵"
    , "サファイアキー"
    , "ネプトゥーヌスの鍵"
    , "アトラースの鍵"
    , "ダモクレスの鍵"
    , "トールの鍵"
    , "華美な鍵"
// puzzles
    , "パズル"
    , "ゴールドアイドル"
    , "金の延棒"
    , "歯車"
    , "ヒューズ"
    , "アンク"
    , "ホルスの目"
    , "アヌビスの石版"
    , "スカラベ"
    , "ピラミッドの鍵"
// TR1 subtitles
    /* CAFE */ ,
    ""
    /* LIFT */ ,
    ""
    /* CANYON */ ,
    ""
    /* PRISON */ ,
    ""
    /* 22 */ ,
    "[04000]また来たの？"
    "[05500]そうよ～あなたの復帰を祝いにね。"
    "[09000]生命の進化は行き詰ってしまい、自然淘汰は全く機能しなくなっている。"
    "[14000]しかし、脅威ともなる新種を世に送り出せば、人間は間引きされ、"
    "[18000]結果的には我々をより強く、"
    "[20500]より進化させる。"
    "[22500]なんだかドーピングした進化論ってことね"
    "[24500]強い刺激が必要なのよ。だから、大陸を崩壊させ、"
    "[29500]文明の利器に頼り切っていた者たちに、"
    "[33000]最も基本的な生存競争を強いたんだ。"
    "[37000]私のプランが皆を救うのよ。"
    "[39000]そう上手くいくかしら。。。"
    "[40000]孵化完了まで15秒前。"
    "[43000]中絶するには遅すぎるわね。"
    "[45000]手術は、他のとこに施すわ。"
    "[47000]ダメ！うわぁ～！！！"
    "[50000]10秒前"
    "[54000]5・・・"
    "[55500]4・・・3・・・2・・・"
    "[60000]1・・・"
    /* 23 */ ,
    "[00001]今度は本当にあたしを怒らせてしまったようね。"
    "[04000]気づいたかな？"
    "[06000]てめぇの下手な銃のおかげで助かったぜ。"
    "[09000]それはどうも"
    "[10000]おめえさん、あのクソ忌々しいシオンのかけらがそんなに欲しいのかい？"
    "[13500]ならそれをアンタのケツの穴にぶち込んでやっ・・・"
    "[17000]ちょっと待って・・・あなたあのお守りの話してるの？"
    "[20000]当たり前だよ・・・目のケツの・・・"
    "[21500]あっ、ちょっと待って - ごめんなさい。"
    "[24000]このシオンとお守りのかけらは他にどこにあるの"
    "[26500]ミス・ナトラがピエール・ドゥポンってヤツを使って探させている。"
    "[29500]それはどこなの？"
    "[30500]はー！おめえさんってヤツ追いつくことはできねえよ。"
    "[34000]どこって聞いてるねん！"
    "[37000]いや～あのフランス野郎がどこいったかわかんねえんだよ。"
    "[41500]ミス・ナトラに聞くしかねえじゃねーか？"
    "[46000]"
    "[50500]ありがとう。ほんのお礼。"
    /* 24 */ , ""
    /* 25 */ ,
    "[03000]ここに眠るは皇帝ティホカン"
    "[06000]・・・大陸アトランティスを統治した二人の公明正大な指導者の一人・・・"
    "[11000]皇帝は大陸の呪いに挑むかのように・・・"
    "[14000]・・・この荒れ果ていた地に秩序と富を実らそうとした・・・"
    "[18000]子孫の残さず去った皇帝はその豊富の知識を後世へ伝えることはなかった・・・"
    "[25000]寛大なるティホカン様、私たちにご加護を。"
    /* 26 */ , "私の家にようこそ。@家の中を紹介するわ。"
    /* 27 */ , "方向キー押して、ミュージックルームに入って。"
    /* 28 */ , "OK。ジャンプの練習しましょう。@ジャンプボタンを押して。"
    /* 29 */ , "ジャンプボタンを押してからすぐに方向キーを押して、@方向キーを押した方向にジャンプするわ。"
    /* 30 */ , "うふふ、ここは応接間よ@散らかっていてごめんなさいね。@運送員がまだ来ないのよ。"
    /* 31 */ , "次はコンテナによじ登ってみましょう。@方向キーの上を押しながらアクションボタンを押して。"
    /* 32 */ , "この部屋は私のジムよ。@どう？"
    /* 33 */ , "歩くボタンを押しながら方向キーを押して、@白線のところまで歩いて。"
    /* 34 */ , "歩くボタンを押していると、崖から落ちないわよ。"
    /* 35 */ , "周りを見渡したいときは見るボタンを押しながら、方向キーを押して。@見るボタンを押しながら、方向キーを押して。"
    /* 36 */ , "まずは、白線のところまで歩いて、@ジャンプボタンを押しながら、すぐに方向キーの上を押して、@空中にいるときにアクションボタンを押しっぱなしにすると、@フチにつかまれるわ。"
    /* 37 */ , "アクションボタンを押したまま、上を押すと登れるわ。"
    /* 38 */ , "方向キーの上を押しながら、ジャンプボタンを押すと走りながらジャンプができるわ。"
    /* 39 */ , "動きが止まるまで歩いて前進し、歩くボタンを離してから@方向キーの下を1回押して、これで助走ができるようになるわ。@上を押し、すぐにジャンプボタンを押し続ける。@そうするとギリギリのところでジャンプできるわ。"
    /* 40 */ , "そして次は最も重要なこと。@走りながらジャンプをして空中にいるとき、@アクションボタンだけを押し続けると崖のフチにつかまれるわ。"
    /* 41 */ , "いいわ～　OK。"
    /* 42 */ , "よじ登るにはアクションボタンを押したまま、方向キーの上を押して。"
    /* 43 */ , "上のスペースが狭くて、ここからは登れないわ。@アクションボタンを押したまま、方向キーの右を押して、@右端まで行ったら、アクションボタンを押したまま、方向キーの上を押せば登れるわ。"
    /* 44 */ , "いいわ～　もしケガをしたくなかったら、遺跡の中では注意深く行動することね。"
    /* 45 */ , "自分の後ろに崖があるとき、@一度方向キーの下を押し、すぐにアクションボタンだけを押して、@崖のフチにぶら下がることもできるわ。"
    /* 46 */ , "じゃあ、次に行きましょう。"
    /* 47 */ , "次は泳ぎの練習ね。"
    /* 48 */ , "ジャンプボタンと方向キーを使って、@泳げるわ。"
    /* 49 */ , "苦しかった～@方向キーの上、左と右ボタンで水上泳ぐことができるわ。@ジャンプボタンでまた潜れるの。@プールのフチに行って、アクションボタンと方向キーの上を押すと水から上がれるわ。"
    /* 50 */ , "そろそろ冒険に行きましょうか？"
    /* 51 */ , "このメス犬が・・・！"
    /* 52 */ , "こいつら一人一人紹介しねえとな。"
    /* 53 */ , "そいつ渡せとは言わねえ！@なぜなら、ここで死んでもらうからさあ。"
    /* 54 */ , "私がそんなに簡単にやられると思う？"
    /* 55 */ , "ビンゴの商品を受け取るには少し遅かったようだな　マドモワゼル。@こういうものは勝ち取らなければならないからね。@う～　実に残念だ。君とこうして争わなければならないなんて。@でも、これが運命なのさ。"
    /* 56 */ , ""
// TR1 levels
    , "ララの家"
    , "洞窟"
    , "古代都市ビルカバンバ"
    , "ロスト・バレー"
    , "クアロペック王墓"
    , "聖フランシス聖堂"
    , "コロシアム"
    , "ミダスの宮殿"
    , "貯水池"
    , "ティホカン王墓"
    , "カームーンの都市遺跡"
    , "カームーンのオベリスク"
    , "シオンの聖域"
    , "ナトラの鉱山"
    , "アトランティス"
    , "グレート・ピラミッド"
    , "エジプト再訪"
    , "猫の寺"
    , "アトランティス改造兵の牙城"
    , "巣箱"
// TR2 levels
    , "ララの家"
    , "万里の長城"
    , "ベニス"
    , "バルトーリの隠れ家"
    , "オペラハウス"
    , "海上倉庫"
    , "潜水場"
    , "海底"
    , "マリア号の残骸"
    , "船底"
    , "デッキ"
    , "チベットの丘陵"
    , "バーカング寺院"
    , "タリオンの墓"
    , "氷の城"
    , "西安の寺"
    , "浮島"
    , "ドラゴンの巣"
    , "ララの家"
// TR3 levels
    , "ララの家"
    , "ジャングル"
    , "滅びた寺院"
    , "ガンジス川"
    , "カリアケーブ"
    , "コーストビレッジ"
    , "墜落現場"
    , "マデュバの谷"
    , "ピュナ寺院"
    , "テムズ川のほとり"
    , "アンダーグラウンド"
    , "ルッドの門"
    , "シティ"
    , "ネバダ砂漠"
    , "ハイセキュリティエリア"
    , "エリア51"
    , "南極大陸"
    , "RX-TECH社発掘場"
    , "滅びたティノス"
    , "クレーター"
    , "セイントデイ"
};
#endif

#define JA_GLYPH_COUNT 452
#define JA_GLYPH_BASE 0
const uint8 JA_GLYPH_WIDTH[] = {
    16, 16, 15, 14, 6, 10, 16, 15, 16, 6, 16, 16, 15, 16, 15, 16, 
    15, 15, 15, 16, 16, 14, 15, 15, 15, 15, 16, 16, 17, 14, 17, 14, 
    15, 16, 17, 16, 16, 16, 17, 15, 13, 17, 16, 17, 16, 13, 13, 12, 
    16, 14, 17, 15, 17, 15, 16, 13, 14, 15, 16, 13, 13, 16, 17, 16, 
    15, 13, 10, 17, 16, 15, 15, 16, 14, 15, 15, 16, 16, 14, 16, 17, 
    17, 13, 16, 16, 15, 16, 16, 16, 16, 16, 14, 13, 16, 17, 16, 15, 
    15, 17, 15, 17, 16, 16, 16, 17, 17, 16, 17, 15, 17, 17, 17, 17, 
    16, 17, 16, 17, 16, 17, 16, 16, 15, 16, 17, 2, 17, 17, 17, 16, 
    14, 17, 16, 17, 17, 17, 16, 16, 17, 16, 17, 17, 17, 17, 16, 16, 
    17, 17, 17, 17, 17, 17, 17, 17, 14, 17, 17, 17, 17, 17, 17, 17, 
    16, 16, 17, 16, 17, 16, 17, 16, 17, 17, 16, 17, 14, 17, 14, 16, 
    17, 16, 16, 17, 17, 17, 16, 17, 17, 17, 16, 15, 17, 16, 17, 16, 
    17, 16, 17, 16, 17, 16, 17, 15, 17, 17, 17, 17, 17, 17, 17, 16, 
    15, 17, 17, 17, 16, 17, 16, 16, 9, 17, 17, 16, 15, 17, 17, 17, 
    17, 17, 14, 17, 14, 16, 14, 17, 17, 15, 16, 17, 17, 16, 17, 16, 
    17, 17, 17, 17, 17, 14, 17, 17, 16, 17, 17, 17, 17, 16, 17, 17, 
    17, 17, 17, 17, 16, 16, 17, 17, 17, 16, 16, 16, 17, 17, 17, 17, 
    17, 16, 17, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
    17, 17, 16, 16, 17, 17, 17, 17, 17, 17, 15, 17, 17, 17, 17, 17, 
    16, 17, 17, 17, 17, 16, 17, 16, 14, 17, 17, 17, 17, 17, 17, 17, 
    16, 16, 17, 16, 17, 17, 17, 17, 17, 17, 14, 17, 17, 15, 17, 17, 
    17, 13, 17, 17, 17, 17, 17, 16, 17, 17, 16, 15, 17, 17, 17, 17, 
    17, 17, 16, 17, 17, 16, 17, 17, 17, 15, 17, 17, 17, 17, 14, 16, 
    17, 17, 17, 17, 17, 17, 17, 16, 17, 17, 17, 17, 17, 17, 17, 17, 
    17, 17, 17, 16, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 
    16, 16, 17, 17, 16, 17, 17, 17, 16, 17, 16, 17, 16, 17, 17, 17, 
    17, 17, 17, 17, 16, 17, 17, 17, 17, 17, 17, 17, 17, 17, 17, 16, 
    17, 16, 16, 17, 17, 14, 17, 17, 17, 16, 15, 17, 15, 17, 17, 16, 
    14, 17, 17, 17, };

const char *STR_JA[] = { "\x11\x02\x70\x01\x97\x01\xD6\xFF\xFF"
// help
    , "\x11\x01\x55\x01\x03\x01\x31\x01\x4F\x01\x06\x01\x06\x01\x06\xFF\xFF"
    , "H\x11\x01\x1D\x01\x13\x01\x02\x01\x1F\x02\x71\x01\x23\x01\x27\x01\x07\x02\x6E\x02\x6F\xFF\xFF"
    , helpText
    , "%s@@@"
      "\x11\x02\x74\x01\x04\x01\x0E\x02\x75\x01\xB1\xFF\xFF"" %d@@"
      "\x11\x02\x72\x01\x16\x01\x0E\x01\x1A\x01\x3C\x01\x24\x01\x34\x01\xB1\xFF\xFF"" %d@@"
      "\x11\x01\x1C\x01\x03\x01\x21\x01\x41\x01\x2F\x01\x20\xFF\xFF"" %d / %d@@"
      "\x11\x02\x73\x01\x9C\x02\x68\x01\x80\xFF\xFF"" %s"
    , "\x11\x01\x5F\x01\x03\x01\x54\x01\x4F\x01\x06\x01\x06\x01\x06\xFF\xFF"
    , "\x11\x01\x5F\x01\x03\x01\x54\x01\x04\x01\x19\x01\x04\x01\x0E\x01\x43\xFF\xFF"
    , "\x11\x01\x5F\x01\x03\x01\x54\x01\x1F\x01\x32\x01\x19\x01\x4D\x01\x33\x01\x1F\x01\x04\x01\x0E\x01\x43\xFF\xFF"
    , "\x11\x01\x15\x01\x0C\xFF\xFF"
    , "\x11\x01\x0C\x01\x0C\x01\x4B\xFF\xFF"
    , "\x11\x01\x3B\x01\x47\xFF\xFF"
    , "\x11\x01\x3B\x01\x02\xFF\xFF"
    , "\x11\x01\x3B\x01\x47\xFF\xFF"
    , "Side-By-Side"
    , "Anaglyph"
    , "\x11\x02\x69\x02\x66\x01\xCA\x02\x67\xFF\xFF"
    , "VR"
    , "\x11\x02\x6C\xFF\xFF"
    , "\x11\x01\x4F\xFF\xFF"
    , "\x11\x02\x6D\xFF\xFF"
    , STR_LANGUAGES
    , "\x11\x02\x6A\x02\x6B\xFF\xFF"
    , "Gamepad 1"
    , "Gamepad 2"
    , "Gamepad 3"
    , "Gamepad 4"
    , "Not Ready"
    , "Player 1"
    , "Player 2"
    , "\x11\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x30\x01\x40\x01\x3A\x01\x0C\xFF\xFF"
    , "%s - \x11\x02\x80\x01\x7A\xFF\xFF"
    , "%s - \x11\x01\xB6\x01\x08\xFF\xFF"
// inventory pages
    , "\x11\x01\x3B\x01\x27\x01\x1C\x01\x38\x01\x02\xFF\xFF"
    , "\x11\x01\xBD\x01\x4A\x01\xBB\xFF\xFF"
    , "\x11\x01\x1A\x01\x3C\x01\x24\x01\x34\xFF\xFF"
// save game page
    , "\x11\x01\x5F\x01\x03\x01\x54\x01\x04\x01\x19\x01\x2D\x01\x14\x01\x42\xFF\xFF"
    , "\x11\x01\xC7\x02\x81\x02\x7E\x02\x7F\xFF\xFF"
// inventory option
    , "\x11\x01\x6E\x01\x03\x01\x34\xFF\xFF"
    , "\x11\x01\x58\x01\x2F\x01\x27\xFF\xFF"
    , "\x11\x01\x5B\x01\x02\x01\x59\x01\x17\xFF\xFF"
    , "\x11\x01\x17\x01\x24\x01\x03\x01\x13\x01\x17\xFF\xFF"
    , "\x11\x01\x18\x01\x18\x01\x01\x01\x4C\xFF\xFF"
    , "\x11\x02\x84\x02\x85\x01\x9B\x01\x7A\xFF\xFF"
    , "\x11\x01\xB0\x01\x60\x01\x02\x01\x31\xFF\xFF"
    , "\x11\x01\x5B\x01\x02\x01\x20\x01\x55\x01\x03\x01\x18\xFF\xFF"
    , "\x11\x01\x83\x01\x08\x01\x3A\xFF\xFF"
// passport menu
    , "\x11\x01\x55\x01\x03\x01\x31\xFF\xFF"
    , "\x11\x01\xAE\x01\x04\x01\x0C\x01\x6E\x01\x03\x01\x34\xFF\xFF"
    , "\x11\x01\x2E\x01\x27\x01\x41\x01\x3C\xFF\xFF"
    , "\x11\x01\x6C\x01\xAB\x01\x4E\x01\x03\x01\x0D\x01\xB6\x01\x08\xFF\xFF"
    , "\x11\x01\x6E\x01\x03\x01\x34\x01\x07\x02\x82\x01\x22\x01\x08\xFF\xFF"
    , "\x11\x01\x41\x01\x71\x01\x23\x01\x07\x02\x83\x02\x78\x01\x2D\x01\x08\xFF\xFF"
// detail options
    , "\x11\x01\x5A\x01\x29\x01\x24\x01\x03\x01\x23\x02\x79\x02\x76\xFF\xFF"
    , "\x11\x01\x47\x01\x29\x01\x23\x01\x13\x01\x2E\x01\x02\x01\x3F\xFF\xFF"
    , "\x11\x01\x18\x01\x3C\x01\x24\x01\x29\x01\x02\x01\x3F\x01\x21\x01\x3B\x01\x2E\x01\x24\x01\x29\xFF\xFF"
    , "\x11\x01\x1C\x01\x39\x01\x31\x01\x60\x01\x21\x01\x3B\x01\x2E\x01\x24\x01\x29\xFF\xFF"
    , "\x11\x01\x69\x01\x21\x01\x3B\x01\x2E\x01\x24\x01\x29\xFF\xFF"
    , "VSync"
    , "\x11\x01\x59\x01\x18\x01\x41\x01\x23\x01\x6A\x01\x4E\x01\x03\xFF\xFF"
    , "2D\x11\x01\x1A\x01\x3C\x01\x24\x01\x34\xFF\xFF"
    , "Resolution"
    , STR_SCALE
// sound options
    , "\x11\x02\x77\x02\x7C\x01\x9B\x01\x7A\xFF\xFF"
    , "\x11\x01\x2E\x01\x48\x01\x03\x01\x54\x01\x41\x01\x03\x01\x1C\x01\x38\x01\x02\xFF\xFF"
    , "\x11\x02\x7D\x02\x7A\xFF\xFF"
    , "\x11\x01\xD2\x01\xD6\xFF\xFF"
// controls options
    , "\x11\x01\x5B\x01\x02\x01\x20\x01\x55\x01\x03\x01\x18\x01\x9B\x01\x7A\xFF\xFF"
    , "\x11\x01\x25\x01\x03\x01\x1D\x01\x03\x01\x31\xFF\xFF"
    , "\x11\x01\x6E\x01\x03\x01\x34\x01\x59\x01\x2F\x01\x31\xFF\xFF"
    , "\x11\x01\x48\x01\x3C\x01\x54\x01\x41\x01\x03\x01\x1C\x01\x38\x01\x02\xFF\xFF"
    , "\x11\x01\x2E\x01\x13\x01\x03\x01\x6E\x01\x24\x01\x29\x01\x02\x01\x3F\xFF\xFF"
    , "\x11\x01\x58\x01\x23\x01\x63\x01\x67\x01\x3C\x01\x52\x01\x02\x01\x3F\xFF\xFF"
    // controls
    , "\x11\x01\xCD\xFF\xFF", "\x11\x01\x75\xFF\xFF", "\x11\x01\x35\xFF\xFF", "\x11\x01\x6B\xFF\xFF", "\x11\x01\x26\x01\x39\x01\x02\x01\x27\xFF\xFF", "\x11\x01\x51\x01\x30\xFF\xFF", "\x11\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\xFF\xFF", "\x11\x01\xDA\x01\x07\x02\x7B\x01\x30\xFF\xFF", "\x11\x01\x70\x01\x08\xFF\xFF", "\x11\x01\x04\x01\x99\x01\x1B\x01\xD7\xFF\xFF", "\x11\x01\x62\x01\x2F\x01\x1C\x01\x4E\xFF\xFF", "\x11\x02\x50\x01\x1B\x01\x08\xFF\xFF", "\x11\x01\xBD\x01\x4A\x01\xBB\x01\x07\x01\x70\x01\x08\xFF\xFF", "\x11\x01\x17\x01\x13\x01\x03\x01\x20\xFF\xFF"
    , STR_KEYS
// inventory items
    , "\x11\x02\x51\x01\x83\xFF\xFF"
    , "\x11\x02\x4E\x01\x68\xFF\xFF"
    , "\x11\x01\x57\x01\x17\x01\x20\x01\x23\xFF\xFF"
    , "\x11\x01\x1C\x01\x38\x01\x2F\x01\x20\x01\x76\x01\x02\xFF\xFF"
    , "\x11\x01\x58\x01\x3F\x01\x56\x01\x34\xFF\xFF"
    , "\x11\x01\x60\x01\x03\x01\x26\x01\x03\xFF\xFF"
    , "\x11\x01\x57\x01\x17\x01\x20\x01\x23\x01\x68\xFF\xFF"
    , "\x11\x01\x1C\x01\x38\x01\x2F\x01\x20\x01\x76\x01\x02\x01\x68\xFF\xFF"
    , "\x11\x01\x58\x01\x3F\x01\x56\x01\x34\x01\x68\xFF\xFF"
    , "\x11\x01\x60\x01\x03\x01\x26\x01\x03\x01\x68\xFF\xFF"
    , "\x11\x01\x6C\x01\x5A\x01\x29\x01\x59\x01\x2F\x01\x21\x01\xE5\x02\x4F\x01\xD9\xFF\xFF"
    , "\x11\x01\x6C\x01\x5A\x01\x29\x01\x59\x01\x2F\x01\x21\x01\xE5\x01\x50\x01\xD9\xFF\xFF"
    , "\x11\x02\x54\x01\x01\x01\xCF\x01\xDF\xFF\xFF"
    , "\x11\x01\x1C\x01\x3B\x01\x02\xFF\xFF"
// keys
    , "\x11\x01\x44\xFF\xFF"
    , "\x11\x02\x55\x01\x01\x01\x44\xFF\xFF"
    , "\x11\x02\x52\x01\x8C\x01\x0E\x01\x44\xFF\xFF"
    , "\x11\x01\xE1\x01\x01\x01\x44\xFF\xFF"
    , "\x11\x01\xB0\x01\x47\x02\x53\x01\x3C\x01\x1A\x01\x25\x01\x03\xFF\xFF"
    , "\x11\x01\xEB\x01\x27\x01\x20\x01\xE7\x01\x03\x01\xDD\x01\x17\x01\x01\x01\x44\xFF\xFF"
    , "\x11\x01\x1A\x01\x20\x01\x18\x01\x03\x01\x17\x01\x01\x01\x44\xFF\xFF"
    , "\x11\x01\x62\x01\xD1\x01\x21\x01\x41\x01\x17\x01\x01\x01\x44\xFF\xFF"
    , "\x11\x01\x20\x01\x03\x01\x23\x01\x01\x01\x44\xFF\xFF"
    , "\x11\x02\x48\x02\x49\x01\x09\x01\x44\xFF\xFF"
// puzzles
    , "\x11\x01\x59\x01\x88\x01\x23\xFF\xFF"
    , "\x11\x01\x89\x01\x03\x01\x23\x01\x31\x01\x1A\x01\x3C\x01\x31\x01\x23\xFF\xFF"
    , "\x11\x01\xE1\x01\x01\x01\xCF\x01\xDF\xFF\xFF"
    , "\x11\x02\x46\x02\x47\xFF\xFF"
    , "\x11\x02\x4C\x01\x4E\x01\x03\x01\x88\xFF\xFF"
    , "\x11\x01\x1A\x01\x02\x01\x21\xFF\xFF"
    , "\x11\x01\x77\x01\x23\x01\x17\x01\x01\x01\xE3\xFF\xFF"
    , "\x11\x01\x1A\x01\xDD\x01\x6A\x01\x17\x01\x01\x02\x4D\x02\x4A\xFF\xFF"
    , "\x11\x01\x17\x01\x49\x01\x18\x01\x71\xFF\xFF"
    , "\x11\x01\x57\x01\x18\x01\x52\x01\x2F\x01\x31\x01\x01\x01\x44\xFF\xFF"
// TR1 subtitles
    /* CAFE */ ,
    ""
    /* LIFT */ ,
    ""
    /* CANYON */ ,
    ""
    /* PRISON */ ,
    ""
    /* 22 */ ,
    "[04000]\x11\x01\x19\x01\x0E\x01\xCB\x01\x0E\x01\x01\x01\x42\xFF\xFF"
    "[05500]\x11\x01\x36\x01\x1E\x01\x28\x01\x53\x01\x3E\x01\x09\x01\x0E\x01\x01\x02\x4B\x02\x60\x01\x07\x02\x61\x01\x0C\x01\x0D\x01\x37\x01\x05\xFF\xFF"
    "[09000]\x11\x01\xCE\x01\xCC\x01\x01\x01\x84\x01\x85\x01\x15\x01\x64\x01\x32\x02\x5E\x01\x16\x01\x0B\x01\x04\x01\x19\x01\x0C\x01\x0A\x01\xEA\x02\x5F\x02\x64\x02\x65\x01\x15\x02\x62\x01\x30\x02\x63\x02\x58\x01\x04\x01\x09\x01\x30\x01\x09\x01\x16\x01\x0B\x01\x0C\x01\x08\x01\x05\xFF\xFF"
    "[14000]\x11\x01\x04\x01\x14\x01\x04\x01\x0A\x02\x59\x02\x56\x01\x0F\x01\x46\x01\x09\x01\x08\x01\xAE\x02\x57\x01\x07\x01\xE4\x01\x0D\x01\xAC\x01\x3D\x02\x5C\x01\x4D\x01\x82\x01\x0A\x01\x6D\x01\x80\x01\x15\x01\x80\x02\x5D\x01\x32\x01\x3A\x01\x2C\x01\x0A\xFF\xFF"
    "[18000]\x11\x02\x5A\x01\xB2\x01\xB3\x01\x0D\x01\x15\x02\x5B\x01\xAF\x01\x07\x01\x28\x01\x3D\x01\x91\x01\x30\x01\x0A\xFF\xFF"
    "[20500]\x11\x01\x28\x01\x3D\x01\x84\x01\x85\x01\x3A\x01\x4D\x01\x08\x01\x05\xFF\xFF"
    "[22500]\x11\x01\x09\x01\x33\x01\x40\x01\x14\x01\x31\x01\x03\x01\x57\x01\x02\x01\x3F\x01\x04\x01\x0E\x01\x84\x01\x85\x02\xB0\x01\x16\x01\x0B\x01\x12\x01\x0F\x01\x37\xFF\xFF"
    "[24500]\x11\x01\x91\x01\x0C\x02\xB1\x02\xAE\x01\x1B\x02\xAF\x01\x9C\x01\x09\x01\x01\x01\x28\x01\x05\x01\x40\x01\x14\x01\x11\x01\x0A\x01\x50\x01\x86\x01\x07\x02\xB4\x02\xB5\x01\x3A\x01\x4D\x01\x0A\xFF\xFF"
    "[29500]\x11\x02\xB2\x01\x83\x01\x01\x02\xB3\x02\xA8\x01\x0D\x02\xA9\x01\x3D\x02\xA6\x01\x16\x01\x0B\x01\x0C\x01\x0E\x01\xA5\x01\x0E\x01\x4A\x01\x0D\x01\x0A\xFF\xFF"
    "[33000]\x11\x01\xA3\x01\x46\x02\xA7\x01\x97\x01\xB3\x01\x09\x01\xCE\x02\xAC\x02\xAD\x01\xC3\x01\x07\x01\x91\x01\x0C\x01\x0E\x01\x33\x01\x40\x01\x05\xFF\xFF"
    "[37000]\x11\x01\x6F\x01\x01\x01\x27\x01\x18\x01\x02\x01\x1B\x02\xAA\x01\x07\x02\xAB\x01\x1E\x01\x01\x01\x28\x01\x05\xFF\xFF"
    "[39000]\x11\x01\x36\x01\x1E\x01\x35\x01\x95\x01\x30\x01\x0C\x01\x30\x01\x14\x01\x04\x01\x11\x01\x05\x01\x05\x01\x05\xFF\xFF"
    "[40000]\x11\x02\xC0\x01\x85\x02\xC1\x02\xBE\x01\x19\x01\x1F\xFF\xFF""15\x11\x01\xC6\x01\x7B\x01\x05\xFF\xFF"
    "[43000]\x11\x01\x4F\x02\xBF\x01\x2D\x01\x08\x01\x0D\x01\x15\x01\xBF\x01\x2D\x01\xB7\x01\x08\x01\x22\x01\x37\x01\x05\xFF\xFF"
    "[45000]\x11\x01\x95\x02\xC4\x01\x15\x01\x0A\x01\xB4\x01\x01\x01\x0F\x01\x12\x01\x0D\x02\xC5\x01\x2D\x01\x22\x01\x05\xFF\xFF"
    "[47000]\x11\x01\x62\x01\x6C\x01\x43\x01\x1E\x01\x22\x02\xC2\x01\x53\x01\x43\x01\x43\x01\x43\xFF\xFF"
    "[50000]10\x11\x01\xC6\x01\x7B\xFF\xFF"
    "[54000]5\x11\x01\x06\x01\x06\x01\x06\xFF\xFF"
    "[55500]4\x11\x01\x06\x01\x06\x01\x06\xFF\xFF""3\x11\x01\x06\x01\x06\x01\x06\xFF\xFF""2\x11\x01\x06\x01\x06\x01\x06\xFF\xFF"
    "[60000]1\x11\x01\x06\x01\x06\x01\x06\xFF\xFF"
    /* 23 */ ,
    "[00001]\x11\x02\xC3\x01\xBE\x01\x15\x01\x97\x01\xBC\x01\x0D\x01\x3E\x01\x0E\x01\x04\x01\x07\x02\xB8\x01\x11\x01\x4D\x01\x0B\x01\x04\x01\x19\x01\x16\x01\x0E\x01\x28\x01\x1E\x01\x37\x01\x05\xFF\xFF"
    "[04000]\x11\x02\xB9\x02\xB6\x01\x0C\x01\x0E\x01\x14\x01\x09\x01\x42\xFF\xFF"
    "[06000]\x11\x01\x0B\x01\x73\x02\xB7\x01\x01\x01\x6B\x01\x95\x01\x09\x01\xDA\x01\x01\x01\x5E\x01\x14\x01\xC5\x01\x1F\x01\xC0\x01\x14\x01\x16\x01\x0E\x01\x9F\x01\x05\xFF\xFF"
    "[09000]\x11\x01\x36\x01\x2C\x01\x15\x01\x5D\x01\x1E\x01\x46\xFF\xFF"
    "[10000]\x11\x01\x5E\x01\x73\x01\x4B\x01\x3A\x01\x33\x01\x0A\x01\x3E\x01\x01\x01\x21\x02\xBC\x02\xBD\x01\xAF\x01\x04\x01\x0C\x01\x1C\x01\x3B\x01\x02\x01\x01\x01\x14\x01\x45\x01\x11\x01\x1B\x01\x36\x01\x33\x01\x09\x01\x0D\x02\xBA\x01\x04\x01\x0C\x01\x01\x01\x14\x01\x0C\x01\x42\xFF\xFF"
    "[13500]\x11\x01\x09\x01\x11\x01\x36\x01\x2C\x01\x07\x01\x1A\x01\x02\x01\x13\x01\x01\x01\x78\x01\x79\x01\x01\x02\xBB\x01\x0D\x01\xB8\x01\x4A\x02\x90\x01\x33\x01\x1F\x01\x90\x01\x16\x01\x06\x01\x06\x01\x06\xFF\xFF"
    "[17000]\x11\x01\x4A\x01\x5C\x01\x16\x01\x0F\x01\xC9\x01\x16\x01\x0B\x01\x06\x01\x06\x01\x06\x01\x3E\x01\x09\x01\x0E\x01\x3E\x01\x01\x01\x5E\x01\xC2\x01\x3D\x01\x01\x02\x91\x01\x04\x01\x0B\x01\x08\x01\x01\x01\x42\xFF\xFF"
    "[20000]\x11\x01\xBC\x01\x0E\x01\x3D\x01\x7B\x01\x40\x01\x28\x01\x06\x01\x06\x01\x06\x01\xE3\x01\x01\x01\x78\x01\x79\x01\x01\x01\x06\x01\x06\x01\x06\xFF\xFF"
    "[21500]\x11\x01\x3E\x01\x16\x01\x0A\x01\x4A\x01\x5C\x01\x16\x01\x0F\x01\xC9\x01\x16\x01\x0B\xFF\xFF"" - \x11\x01\x8F\x01\x73\x01\x33\x01\x09\x01\x3A\x01\x0C\x01\x05\xFF\xFF"
    "[24000]\x11\x01\x12\x01\x01\x01\x1C\x01\x3B\x01\x02\x01\x0F\x01\x5E\x01\xC2\x01\x3D\x01\x01\x01\x14\x01\x45\x01\x11\x01\x15\x01\xB4\x01\x0D\x01\x5D\x01\x12\x01\x0D\x01\x3E\x01\x08\x01\x01\xFF\xFF"
    "[26500]\x11\x01\x52\x01\x17\x01\x06\x01\x56\x01\x20\x01\x18\x01\x1B\x01\x57\x01\x67\x01\x03\x01\x23\x01\x06\x01\x31\x01\xE7\x02\x8E\x01\x02\x01\x16\x01\x0B\x01\xA4\x01\x79\x01\x07\x01\xA7\x01\x16\x01\x0B\x02\x8F\x01\x3A\x01\x4D\x01\x0B\x01\x0C\x01\x08\x01\x05\xFF\xFF"
    "[29500]\x11\x01\x36\x01\x2C\x01\x15\x01\x5D\x01\x12\x01\x09\x01\x01\x01\x42\xFF\xFF"
    "[30500]\x11\x01\x15\x01\x03\x01\x43\x01\x5E\x01\x73\x01\x4B\x01\x3A\x01\x33\x01\x16\x01\x0B\x01\xA4\x01\x79\x02\x94\x01\x0C\x01\x65\x01\x30\x01\x12\x01\x0F\x01\x15\x01\x1F\x01\x32\x01\x37\x01\x4B\x01\x28\x01\x05\xFF\xFF"
    "[34000]\x11\x01\x5D\x01\x12\x01\x16\x01\x0B\x01\xA2\x01\x0C\x01\x0B\x01\x08\x01\x37\x01\x33\x01\x43\xFF\xFF"
    "[37000]\x11\x01\x0C\x01\x90\x01\x53\x01\x3E\x01\x01\x01\x47\x01\x18\x01\x02\x01\x17\x02\x95\x02\x92\x01\x1B\x01\x5D\x01\x12\x01\x0C\x01\x16\x01\x0E\x01\x14\x01\x22\x01\x14\x01\x33\x01\x37\x01\x4B\x01\x33\x01\x40\x01\x28\x01\x05\xFF\xFF"
    "[41500]\x11\x01\x52\x01\x17\x01\x06\x01\x56\x01\x20\x01\x18\x01\x0D\x01\xA2\x01\x30\x01\x04\x01\x14\x01\x37\x01\x4B\x01\x81\x01\x99\x01\x37\x01\x03\x01\x14\x01\x42\xFF\xFF"
    "[46000]"
    "[50500]\x11\x01\x3E\x01\x3D\x01\x1B\x01\x0F\x01\x1E\x01\x05\x01\xA1\x01\x33\x01\x01\x01\x5E\x02\x93\x01\x05\xFF\xFF"
    /* 24 */ , ""
    /* 25 */ ,
    "[03000]\x11\x01\x12\x01\x12\x01\x0D\x02\x88\x01\x08\x01\x15\x01\x8E\x01\x87\x01\x24\x01\x29\x01\x77\x01\x49\x01\x02\xFF\xFF"
    "[06000]\x11\x01\x06\x01\x06\x01\x06\x01\x50\x01\x86\x01\x1A\x01\x20\x01\x18\x01\x02\x01\x24\x01\x29\x01\x17\x01\x07\x02\x89\x02\x86\x01\x04\x01\x0E\x02\x87\x01\x6D\x01\x01\x02\x8C\x01\x83\x02\x8D\x01\x50\x01\x09\x02\x8A\x02\x8B\x01\xA5\x01\x01\x01\x7D\x01\x6D\x01\x06\x01\x06\x01\x06\xFF\xFF"
    "[11000]\x11\x01\x8E\x01\x87\x01\x15\x01\x50\x01\x86\x01\x01\x02\xA0\x01\x0C\x01\x0D\x02\xA1\x01\xD7\x01\x14\x01\x01\x01\x28\x01\x1E\x01\x0D\x01\x06\x01\x06\x01\x06\xFF\xFF"
    "[14000]\x11\x01\x06\x01\x06\x01\x06\x01\x12\x01\x01\x02\x9E\x01\x2C\x01\xB2\x01\x0B\x01\x0C\x01\x0E\x02\x9F\x01\x0D\x02\xA4\x02\xA5\x01\x0F\x01\xD8\x01\x07\x01\xD5\x01\x11\x01\x36\x01\x1E\x01\x0F\x01\x04\x01\x0E\x01\x06\x01\x06\x01\x06\xFF\xFF"
    "[18000]\x11\x02\xA2\x02\xA3\x01\x01\x01\x8B\x01\x3A\x01\xD3\x02\x98\x01\x16\x01\x0E\x01\x8E\x01\x87\x01\x15\x01\x36\x01\x01\x02\x99\x01\xD8\x01\x01\x02\x96\x02\x97\x01\x07\x01\xDB\x01\xE4\x02\x9C\x02\x9D\x01\x4B\x01\x08\x01\x12\x01\x0F\x01\x15\x01\x09\x01\x14\x01\x16\x01\x0E\x01\x06\x01\x06\x01\x06\xFF\xFF"
    "[25000]\x11\x02\x9A\x01\x50\x01\x09\x01\x08\x01\x24\x01\x29\x01\x77\x01\x49\x01\x02\x02\x9B\x01\x0A\x01\x6F\x01\x0E\x01\x4A\x01\x0D\x01\x8F\x02\x45\x01\xF2\x01\x07\x01\x05\xFF\xFF"
    /* 26 */ , "\x11\x01\x6F\x01\x01\x01\x4C\x01\x0D\x01\x28\x01\x1E\x01\x12\x01\x36\x01\x05\xFF\xFF""@\x11\x01\x4C\x01\x01\x01\x4F\x01\x07\x01\xE6\x01\xEC\x01\x2D\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 27 */ , "\x11\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x10\x01\x04\x01\x0B\x01\x0A\x01\x52\x01\x4E\x01\x03\x01\x26\x01\x2F\x01\x21\x01\x23\x01\x03\x01\x34\x01\x0D\x01\xF4\x01\x16\x01\x0B\x01\x05\xFF\xFF"
    /* 28 */ , "OK\x11\x01\x05\x01\x26\x01\x39\x01\x02\x01\x27\x01\x01\x01\xEF\x01\xEE\x01\x04\x01\x19\x01\x04\x01\x5C\x01\x1E\x01\x05\xFF\xFF""@\x11\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x05\xFF\xFF"
    /* 29 */ , "\x11\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x14\x01\x11\x01\x2D\x01\x66\x01\x0D\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x0A\xFF\xFF""@\x11\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x07\x01\x10\x01\x04\x01\x0E\x01\x2A\x01\x2B\x01\x0D\x01\x26\x01\x39\x01\x02\x01\x27\x01\x2D\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 30 */ , "\x11\x01\x1E\x01\xD4\x01\xD4\x01\x0A\x01\x12\x01\x12\x01\x15\x02\x03\x02\x09\x01\x80\x01\x28\xFF\xFF""@\x11\x02\x08\x01\x11\x01\x14\x01\x16\x01\x0B\x01\x0C\x01\x0B\x01\x8F\x01\x73\x01\x33\x01\x09\x01\x3A\x01\x0C\x01\x37\x01\x05\xFF\xFF""@\x11\x01\xE8\x01\xAC\x01\xF9\x01\x1B\x01\x19\x01\x40\x01\xCB\x01\x09\x01\x0C\x01\x01\x01\x28\x01\x05\xFF\xFF"
    /* 31 */ , "\x11\x01\x7E\x01\x15\x01\x5B\x01\x02\x01\x24\x01\x56\x01\x0D\x01\x28\x01\x81\x01\x74\x01\x16\x01\x0B\x01\xFE\x01\x19\x01\x04\x01\x5C\x01\x1E\x01\x05\xFF\xFF""@\x11\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x35\x01\x07\x01\x10\x01\x04\x01\x09\x01\x1B\x01\x11\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x05\xFF\xFF"
    /* 32 */ , "\x11\x01\x12\x01\x01\x01\xFD\x01\xFC\x01\x15\x01\x6F\x01\x01\x01\x26\x01\x34\x01\x28\x01\x05\xFF\xFF""@\x11\x01\x5D\x01\x1E\x01\x42\xFF\xFF"
    /* 33 */ , "\x11\x01\x51\x01\x30\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x09\x01\x1B\x01\x11\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x0A\xFF\xFF""@\x11\x01\xAD\x01\xAA\x01\x01\x01\x0F\x01\x12\x01\x61\x01\x19\x01\x1F\x01\x51\x01\x0C\x01\x0B\x01\x05\xFF\xFF"
    /* 34 */ , "\x11\x01\x51\x01\x30\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x0C\x01\x08\x01\x0F\x01\x0A\x01\x7F\x01\x14\x01\x11\x01\xA0\x01\x4A\x01\x09\x01\x0C\x01\x22\x01\x28\x01\x05\xFF\xFF"
    /* 35 */ , "\x11\x02\x07\x01\x3D\x01\x07\x01\x70\x01\x9E\x01\x04\x01\x0E\x01\x0C\x01\x0F\x01\x32\x01\x15\x01\x70\x01\x08\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x09\x01\x1B\x01\x11\x01\x0A\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x05\xFF\xFF""@\x11\x01\x70\x01\x08\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x09\x01\x1B\x01\x11\x01\x0A\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x05\xFF\xFF"
    /* 36 */ , "\x11\x01\x19\x01\xD3\x01\x15\x01\x0A\x01\xAD\x01\xAA\x01\x01\x01\x0F\x01\x12\x01\x61\x01\x19\x01\x1F\x01\x51\x01\x0C\x01\x0B\x01\x0A\xFF\xFF""@\x11\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x09\x01\x1B\x01\x11\x01\x0A\x01\x2D\x01\x66\x01\x0D\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x35\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x0A\xFF\xFF""@\x11\x01\xA6\x01\x4F\x01\x0D\x01\x0C\x01\x08\x01\x0F\x01\x32\x01\x0D\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x16\x02\x0A\x01\x09\x01\x04\x01\x0D\x01\x2D\x01\x08\x01\x0F\x01\x0A\xFF\xFF""@\x11\x01\x47\x01\x63\x01\x0D\x01\x65\x01\x14\x01\x19\x01\x2C\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 37 */ , "\x11\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0E\x01\x19\x01\x19\x01\x0A\x01\x35\x01\x07\x01\x10\x01\x2D\x01\x0F\x01\x74\x01\x2C\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 38 */ , "\x11\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x35\x01\x07\x01\x10\x01\x04\x01\x09\x01\x1B\x01\x11\x01\x0A\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x2D\x01\x0F\x01\x92\x01\x3D\x01\x09\x01\x1B\x01\x11\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1B\x01\x1F\x01\x32\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 39 */ , "\x11\x01\xC4\x01\x32\x01\x1B\x02\x05\x01\x19\x01\x08\x01\x19\x01\x1F\x01\x51\x01\x0C\x01\x0B\x01\x7B\x01\x84\x01\x04\x01\x0A\x01\x51\x01\x30\x01\x1D\x01\x13\x01\x02\x01\x07\x01\xF5\x01\x04\x01\x0B\x01\x14\x01\x11\xFF\xFF""@\x11\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x6B\x01\x07\xFF\xFF""1\x11\x01\xF0\x01\x10\x01\x04\x01\x0B\x01\x0A\x01\x12\x01\x2C\x01\x1F\x01\xC0\x01\x92\x01\x1B\x01\x1F\x01\x32\x01\x08\x01\x28\x01\x1E\x01\x0D\x01\x09\x01\x08\x01\x22\x01\x05\xFF\xFF""@\x11\x01\x35\x01\x07\x01\x10\x01\x04\x01\x0A\x01\x2D\x01\x66\x01\x0D\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\xA9\x01\x45\x01\x08\x01\x05\xFF\xFF""@\x11\x01\x36\x01\x1E\x01\x2D\x01\x08\x01\x0F\x01\xA8\x01\x2E\x01\xA8\x01\x2E\x01\x01\x01\x0F\x01\x12\x01\x61\x01\x1F\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1F\x01\x32\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 40 */ , "\x11\x01\x36\x01\x04\x01\x0B\x01\x7E\x01\x15\x01\xA3\x01\x46\x02\x30\x01\x9C\x01\x09\x01\x12\x01\x0F\x01\x05\xFF\xFF""@\x11\x01\x92\x01\x3D\x01\x09\x01\x1B\x01\x11\x01\x26\x01\x39\x01\x02\x01\x27\x01\x07\x01\x04\x01\x0B\x01\xA6\x01\x4F\x01\x0D\x01\x0C\x01\x08\x01\x0F\x01\x32\x01\x0A\xFF\xFF""@\x11\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x40\x01\x45\x01\x07\x01\x10\x01\x04\x01\xA9\x01\x45\x01\x08\x01\x0F\x01\x7F\x01\x01\x01\x47\x01\x63\x01\x0D\x01\x65\x01\x14\x01\x19\x01\x2C\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 41 */ , "\x11\x01\x0C\x01\x0C\x01\x22\x01\x53\x01\x7C\xFF\xFF""OK\x11\x01\x05\xFF\xFF"
    /* 42 */ , "\x11\x01\x28\x01\x81\x01\x74\x01\x08\x01\x0D\x01\x15\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0E\x01\x19\x01\x19\x01\x0A\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x35\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x05\xFF\xFF"
    /* 43 */ , "\x11\x01\x35\x01\x01\x01\x17\x01\x8A\x01\x03\x01\x17\x01\x1B\x02\x33\x01\x30\x01\x0B\x01\x0A\x01\x12\x01\x12\x01\x14\x01\x11\x01\x15\x01\x74\x01\x2C\x01\x09\x01\x0C\x01\x22\x01\x05\xFF\xFF""@\x11\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0E\x01\x19\x01\x19\x01\x0A\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x75\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x0A\xFF\xFF""@\x11\x01\x75\x02\x36\x01\x19\x01\x1F\x01\x64\x01\x16\x01\x0E\x01\x11\x01\x0A\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x07\x01\x10\x01\x04\x01\x0E\x01\x19\x01\x19\x01\x0A\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x35\x01\x07\x01\x10\x01\x4D\x01\x82\x01\x74\x01\x2C\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 44 */ , "\x11\x01\x0C\x01\x0C\x01\x22\x01\x53\x01\x7C\x01\x46\x01\x04\x01\x78\x01\x76\x01\x07\x01\x04\x01\x0E\x01\x30\x01\x09\x01\x14\x01\x16\x01\x0E\x01\x11\x01\x0A\x01\xB9\x01\xB5\x01\x01\x01\x4F\x01\x1F\x01\x15\x02\x35\x02\x34\x02\x2B\x01\x30\x01\x64\x01\xC4\x01\x2D\x01\x08\x01\x12\x01\x0F\x01\x37\x01\x05\xFF\xFF"
    /* 45 */ , "\x11\x01\xEA\x01\xCA\x01\x01\x01\xDB\x01\x61\x01\x0D\x01\x7F\x01\x1B\x01\x3E\x01\x08\x01\x0F\x01\x32\x01\x0A\xFF\xFF""@\x11\x01\x7D\x01\xBE\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x6B\x01\x07\x01\x10\x01\x04\x01\x0A\x01\x2D\x01\x66\x01\x0D\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x40\x01\x45\x01\x07\x01\x10\x01\x04\x01\x0B\x01\x0A\xFF\xFF""@\x11\x01\x7F\x01\x01\x01\x47\x01\x63\x01\x0D\x01\xB8\x01\x11\x01\x6B\x01\x1B\x01\x08\x01\x12\x01\x0F\x01\x46\x01\x1F\x01\x32\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 46 */ , "\x11\x01\x81\x01\x99\x01\x3E\x01\x0A\x01\x7E\x01\x0D\x01\x64\x01\x32\x01\x19\x01\x04\x01\x5C\x01\x1E\x01\x05\xFF\xFF"
    /* 47 */ , "\x11\x01\x7E\x01\x15\x01\x8D\x01\xB7\x01\x01\x01\xEF\x01\xEE\x01\x37\x01\x05\xFF\xFF"
    /* 48 */ , "\x11\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1D\x01\x13\x01\x02\x01\x0F\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x07\x01\xA7\x01\x16\x01\x0B\x01\x0A\xFF\xFF""@\x11\x01\x8D\x01\xC5\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 49 */ , "\x11\x02\x29\x01\x04\x01\x14\x01\x16\x01\x0E\x01\x53\xFF\xFF""@\x11\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x35\x01\x0A\x01\xCD\x01\x0F\x01\x75\x01\x1D\x01\x13\x01\x02\x01\x1F\x01\x69\x01\x35\x01\x8D\x01\x66\x01\x12\x01\x0F\x01\x1B\x01\x1F\x01\x32\x01\x08\x01\x22\x01\x05\xFF\xFF""@\x11\x01\x26\x01\x39\x01\x02\x01\x27\x01\x1D\x01\x13\x01\x02\x01\x1F\x01\x19\x01\x0E\x01\xC1\x01\x2C\x01\x08\x01\x01\x01\x05\xFF\xFF""@\x11\x01\x27\x01\x03\x01\x23\x01\x01\x01\x47\x01\x63\x01\x0D\x01\x64\x01\x16\x01\x0B\x01\x0A\x01\x1A\x01\x21\x01\x1C\x01\x38\x01\x02\x01\x1D\x01\x13\x01\x02\x01\x0F\x01\x2A\x01\x2B\x01\x25\x01\x03\x01\x01\x01\x35\x01\x07\x01\x10\x01\x2D\x01\x0F\x01\x69\x01\x14\x01\x11\x01\x35\x01\x1B\x01\x2C\x01\x08\x01\x22\x01\x05\xFF\xFF"
    /* 50 */ , "\x11\x01\x36\x01\x61\x01\x36\x01\x61\x02\x2C\x02\x2E\x01\x0D\x01\x64\x01\x32\x01\x19\x01\x04\x01\x5C\x01\x1E\x01\x14\x01\x42\xFF\xFF"
    /* 51 */ , "\x11\x01\x12\x01\x01\x01\x6C\x01\x17\x02\x2D\x01\x1B\x01\x06\x01\x06\x01\x06\x01\x43\xFF\xFF"
    /* 52 */ , "\x11\x01\x12\x01\x0C\x01\x65\x01\x11\x01\x7D\x01\x6D\x01\x7D\x01\x6D\x01\xE6\x01\xEC\x01\x04\x01\x37\x01\x4B\x01\x0F\x01\x09\x01\x05\xFF\xFF"
    /* 53 */ , "\x11\x01\x36\x01\x0C\x01\x65\x01\x9E\x01\x4D\x01\x0F\x01\x15\x01\xD2\x01\x22\x01\x37\x01\x4B\x01\x43\xFF\xFF""@\x11\x01\x09\x01\x9F\x01\x09\x01\x11\x01\x0A\x01\x12\x01\x12\x01\x1F\x02\x40\x01\x33\x01\x1F\x01\x46\x01\x11\x01\x1E\x01\x14\x01\x11\x01\x3A\x01\x3E\x01\x05\xFF\xFF"
    /* 54 */ , "\x11\x01\x6F\x01\x1B\x01\x36\x01\x33\x01\x09\x01\x0D\x02\x3F\x02\x3E\x01\x0D\x01\x90\x01\x11\x01\x2C\x01\x08\x01\x0F\x02\x41\x01\x1E\x01\x42\xFF\xFF"
    /* 55 */ , "\x11\x01\x6A\x01\x02\x01\x89\x01\x01\x02\x44\x02\x43\x01\x07\x02\x42\x01\x45\x01\x9D\x01\x08\x01\x0D\x01\x15\x02\x37\x01\x04\x01\xBF\x01\x14\x01\x16\x01\x0E\x01\x28\x01\x1E\x01\x40\x01\x09\x01\x7C\x01\x58\x01\x31\x01\xD1\x02\x3A\x02\x3D\x01\x23\x01\x05\xFF\xFF""@\x11\x01\x12\x01\x1E\x01\x0C\x01\x1E\x01\x46\x01\x01\x01\x15\x02\x3C\x01\x4A\x01\x9D\x01\x11\x01\x09\x01\x45\x01\x2C\x01\x82\x01\x09\x01\x11\x01\x09\x01\x0C\x01\x14\x01\x11\x01\x37\x01\x05\xFF\xFF""@\x11\x01\x1E\x01\x53\x01\x7C\x01\xD5\x01\x0D\x01\x8B\x02\x3B\x01\x40\x01\x05\x02\x28\x01\x0F\x01\x12\x01\x1E\x01\x04\x01\x0B\x01\xC3\x01\x22\x01\x09\x01\x45\x01\x2C\x01\x82\x01\x09\x01\x11\x01\x09\x01\x0C\x01\x09\x01\x33\x01\x0B\x01\x05\xFF\xFF""@\x11\x01\x1F\x01\x46\x01\x0A\x01\x12\x01\x2C\x01\x1B\x01\xE8\x01\xCC\x01\x09\x01\x01\x01\x3A\x01\x05\xFF\xFF"
    /* 56 */ , ""
// TR1 levels
    , "\x11\x01\x18\x01\x18\x01\x01\x01\x4C\xFF\xFF"
    , "\x11\x02\x15\x02\x13\xFF\xFF"
    , "\x11\x02\x19\x02\x18\x01\xDE\x01\xE0\x01\x6A\x01\x23\x01\x49\x01\x48\x01\x02\x01\x48\xFF\xFF"
    , "\x11\x01\x55\x01\x17\x01\x20\x01\x06\x01\x48\x01\x41\x01\x03\xFF\xFF"
    , "\x11\x01\x21\x01\x1A\x01\x55\x01\x8A\x01\x2F\x01\x21\x01\xED\x01\x94\xFF\xFF"
    , "\x11\x01\x93\x01\x47\x01\x18\x01\x02\x01\x1C\x01\x17\x01\x93\x02\x0D\xFF\xFF"
    , "\x11\x01\x5B\x01\x55\x01\x1C\x01\x1A\x01\x34\xFF\xFF"
    , "\x11\x01\x52\x01\x62\x01\x17\x01\x01\x02\x0C\x02\x0F\xFF\xFF"
    , "\x11\x02\x11\x01\x69\x02\x10\xFF\xFF"
    , "\x11\x01\x24\x01\x29\x01\x77\x01\x49\x01\x02\x01\xED\x01\x94\xFF\xFF"
    , "\x11\x01\x49\x01\x03\x01\x34\x01\x03\x01\x02\x01\x01\x01\xDE\x01\xE0\x01\xB9\x01\xB5\xFF\xFF"
    , "\x11\x01\x49\x01\x03\x01\x34\x01\x03\x01\x02\x01\x01\x01\x3B\x01\x71\x01\x2E\x01\x17\x01\x21\xFF\xFF"
    , "\x11\x01\x1C\x01\x3B\x01\x02\x01\x01\x01\x93\x02\x23\xFF\xFF"
    , "\x11\x01\x56\x01\x20\x01\x18\x01\x01\x02\x26\x02\x25\xFF\xFF"
    , "\x11\x01\x1A\x01\x20\x01\x18\x01\x02\x01\x24\x01\x29\x01\x17\xFF\xFF"
    , "\x11\x01\x3F\x01\x41\x01\x03\x01\x20\x01\x06\x01\x57\x01\x18\x01\x52\x01\x2F\x01\x31\xFF\xFF"
    , "\x11\x01\x67\x01\x26\x01\x27\x01\x20\x02\x1C\x02\x1B\xFF\xFF"
    , "\x11\x02\x1A\x01\x01\x01\x72\xFF\xFF"
    , "\x11\x01\x1A\x01\x20\x01\x18\x01\x02\x01\x24\x01\x29\x01\x17\x02\x1D\x02\x20\x02\x1F\x01\x01\x02\x1E\x01\x98\xFF\xFF"
    , "\x11\x01\xDC\x02\x27\xFF\xFF"
// TR2 levels
    , "\x11\x01\x18\x01\x18\x01\x01\x01\x4C\xFF\xFF"
    , "\x11\x02\x24\x02\x21\x01\x01\x02\x22\x01\x98\xFF\xFF"
    , "\x11\x01\x71\x01\xAB\x01\x17\xFF\xFF"
    , "\x11\x01\x48\x01\x23\x01\x20\x01\x03\x01\x2E\x01\x01\x02\x12\x01\x2C\x01\x4C\xFF\xFF"
    , "\x11\x01\x3B\x01\x8A\x01\x18\x01\xD0\x01\x60\x01\x17\xFF\xFF"
    , "\x11\x01\xE9\x01\x35\x02\x0E\x02\x17\xFF\xFF"
    , "\x11\x01\xC1\x01\x69\x01\x9A\xFF\xFF"
    , "\x11\x01\xE9\x01\xE2\xFF\xFF"
    , "\x11\x01\x58\x01\x2E\x01\x1A\x02\x16\x01\x01\x01\x8B\x02\x14\xFF\xFF"
    , "\x11\x02\x38\x01\xE2\xFF\xFF"
    , "\x11\x01\x5A\x01\x2F\x01\x25\xFF\xFF"
    , "\x11\x01\x63\x01\x71\x01\x2F\x01\x20\x01\x01\x02\x39\x02\x2F\xFF\xFF"
    , "\x11\x01\x48\x01\x03\x01\x49\x01\x02\x01\x3F\x01\x72\x01\x96\xFF\xFF"
    , "\x11\x01\x13\x01\x2E\x01\x3B\x01\x02\x01\x01\x01\x94\xFF\xFF"
    , "\x11\x02\x2A\x01\x01\x01\x98\xFF\xFF"
    , "\x11\x02\x31\x02\x32\x01\x01\x01\x72\xFF\xFF"
    , "\x11\x01\xF1\x01\xF3\xFF\xFF"
    , "\x11\x01\x31\x01\x18\x01\x89\x01\x02\x01\x01\x01\xDC\xFF\xFF"
    , "\x11\x01\x18\x01\x18\x01\x01\x01\x4C\xFF\xFF"
// TR3 levels
    , "\x11\x01\x18\x01\x18\x01\x01\x01\x4C\xFF\xFF"
    , "\x11\x01\x26\x01\x39\x01\x02\x01\x3F\x01\x23\xFF\xFF"
    , "\x11\x01\xBA\x01\x8C\x01\x0E\x01\x72\x01\x96\xFF\xFF"
    , "\x11\x01\x76\x01\x02\x01\x26\x01\x17\x01\xC8\xFF\xFF"
    , "\x11\x01\x49\x01\x2E\x01\x1A\x01\x78\x01\x03\x01\x54\xFF\xFF"
    , "\x11\x01\x5B\x01\x03\x01\x17\x01\x20\x01\x6A\x01\x41\x01\x2F\x01\x26\xFF\xFF"
    , "\x11\x02\x04\x01\xA0\x01\xC7\x01\x9A\xFF\xFF"
    , "\x11\x01\x58\x01\x5A\x01\x4E\x01\x48\x01\x01\x02\x02\xFF\xFF"
    , "\x11\x01\x57\x01\x4E\x01\x56\x01\x72\x01\x96\xFF\xFF"
    , "\x11\x01\x24\x01\x34\x01\x88\x01\xC8\x01\x01\x01\xA1\x01\x0F\x01\x3D\xFF\xFF"
    , "\x11\x01\x1A\x01\x02\x01\x62\x01\x03\x01\x3F\x01\x18\x01\x60\x01\x02\x01\x31\xFF\xFF"
    , "\x11\x01\x23\x01\x2F\x01\x31\x01\x01\x02\x0B\xFF\xFF"
    , "\x11\x01\x1C\x01\x24\x01\x29\xFF\xFF"
    , "\x11\x01\xEB\x01\x48\x01\x62\x01\xFA\x01\xFB\xFF\xFF"
    , "\x11\x01\xD0\x01\x3C\x01\x5F\x01\x25\x01\x4E\x01\x2E\x01\x24\x01\x29\x01\x67\x01\x2E\x01\x1A\xFF\xFF"
    , "\x11\x01\x67\x01\x2E\x01\x1A\xFF\xFF""51"
    , "\x11\x01\xFF\x02\x01\x01\x50\x01\x86\xFF\xFF"
    , "RX-TECH\x11\x01\xF8\x01\xF7\x02\x06\x01\x9A\xFF\xFF"
    , "\x11\x01\xBA\x01\x8C\x01\x0E\x01\x24\x01\x29\x01\xF6\x01\x17\xFF\xFF"
    , "\x11\x01\x21\x01\x41\x01\x03\x01\x13\x01\x03\xFF\xFF"
    , "\x11\x01\x5F\x01\x3C\x01\x02\x01\x20\x01\x5A\x01\x3C\xFF\xFF"
};

#endif
