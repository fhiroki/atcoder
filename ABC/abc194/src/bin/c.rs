use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: i64,
        a: [i64; n]
    }
    let l = n * a.iter().map(|x| x * x).sum::<i64>();
    let r = a.iter().sum::<i64>().pow(2);
    println!("{}", l - r);
}
