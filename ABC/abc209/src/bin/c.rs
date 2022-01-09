use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        mut c: [usize; n]
    }
    c.sort();
    let m = 1e9 as usize + 7;
    let mut ans = 1;
    for i in 0..n {
        ans = (ans * (c[i] - i)) % m;
    }
    println!("{}", ans);
}
