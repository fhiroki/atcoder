use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        s: [u32; n],
        mut t: [u32; n]
    }
    for i in 0..n * 2 {
        let next = (i + 1) % n;
        t[next] = t[next].min(t[i % n] + s[i % n]);
    }
    for v in t {
        println!("{}", v);
    }
}
