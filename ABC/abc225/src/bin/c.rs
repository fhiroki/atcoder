use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: usize,
        m: usize,
        b: [[usize; m]; n]
    }
    if (b[0][0] - 1) % 7 + m > 7 {
        println!("No");
        return;
    }
    for i in 0..n {
        for j in 0..m {
            if b[i][j] - b[0][0] != i * 7 + j {
                println!("No");
                return;
            }
        }
    }
    println!("Yes");
}
