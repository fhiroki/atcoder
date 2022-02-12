use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        h: usize,
        w: usize,
        a: [[u32; w]; h]
    }
    for j in 0..w {
        for i in 0..h {
            print!("{} ", a[i][j]);
        }
        println!();
    }
}
