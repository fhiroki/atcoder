use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
    }
    let mut a = vec![];
    for i in 0..n {
        input! {
            ai: u32,
        }
        a.push((i + 1, ai));
    }
    a.sort_by(|x, y| x.1.cmp(&y.1));
    println!("{}", a[n - 2].0);
}
