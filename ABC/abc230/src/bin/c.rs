use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: i64,
        a: i64,
        b: i64,
        p: i64,
        q: i64,
        r: i64,
        s: i64,
    }

    for i in p..=q {
        for j in r..=s {
            let k = i - a;
            if i - j == a - b {
                if k >= (1 - a).max(1 - b) && k <= (n - a).min(n - b) {
                    print!("#");
                    continue;
                }
            } else if i + j == a + b {
                if k >= (1 - a).max(b - n) && k <= (n - a).min(b - 1) {
                    print!("#");
                    continue;
                }
            }
            print!(".");
        }
        println!();
    }
}
