use proconio::{fastout, input};

#[fastout]
fn main() {
    input! {
        n: i128
    }
    let upper = 2i128.pow(31);
    if n >= -1 * upper && n < upper {
        println!("Yes");
    } else {
        println!("No")
    }
}
