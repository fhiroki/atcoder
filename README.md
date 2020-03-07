# atcoder

[AtCoder](https://atcoder.jp/?lang=ja) でACした問題を記録するレポジトリです。

## setup

atcoder-cli を使って、コードを提出するフローを自動化しているので、その設定について紹介します。インストールやログイン、その他の細かい設定については [公式のレポジトリ](https://github.com/Tatamo/atcoder-cli) を参考にしてください。

まず、`.cpp` のテンプレートを自動作成するため、 `acc config-dir` で表示されたディレクトリに `cpp/main.cpp` を作成します。
```cpp
#include <bits/stdc++.h>
#define rep(i, N) for (int i = 0; i < (N); i++)
using namespace std;
using ll = long long;

int main() {
    int N;
    cin >> N;

    int ans = 0;

    cout << ans << endl;
    return 0;
}
```
そして `cpp/template.json` に以下の設定を記述します。
```json
{
    "task": {
        "program": ["main.cpp"],
        "submit": "main.cpp"
    }
}
```

## make file and test case

例えば、ABC100の問題が解きたいときは、
```
$ acc new abc100
```
とし、解きたい問題を選択します。a, b, cの問題を選んだとすると、 `abc100` 直下に `a`、`b`、`c` のディクトリが作成され、それぞれのディレクトリに先ほど設定したテンプレートファイルと、テストケースが生成されます。

## test

コードが完成したら、テストケースを走らせます。コンパイルして、`oj` コマンドによりテストを行いますが、面倒なので、以下の２つのコマンドを `acc-test` としてaliasに登録しています。
```
g++ main.cpp
oj t -d tests/
```

## submit

テストケースが通っていることが確認できたら、以下のコマンドで提出できます。
```
$ acc submit
```
