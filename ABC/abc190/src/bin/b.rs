use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        s: u32,
        d: u32,
    }

    for _ in 0..n {
        input! {
            x: u32,
            y: u32,
        }
        if x < s && y > d {
            println!("Yes");
            return;
        }
    }

    println!("No");
}
