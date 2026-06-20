# ➊ Tiêu đề cấp 1 (H1) - Tổng quan dự án

Đây là đoạn văn bản thông thường để kiểm tra font chữ và khoảng cách dòng.
Bạn có thể viết chữ **in đậm**, _in nghiêng_, hoặc ~~gạch ngang~~ một cách
dễ dàng.

---

## ➋ Tiêu đề cấp 2 (H2) - Tình huống Render Hình Ảnh (Test image.nvim)

### Ảnh từ URL (Online) - Cần test tự động download và render

![Ảnh chú chó dễ thương (Online)](https://images.unsplash.com/photo-1543466835-00a7907e9de1?w=500)

### Ảnh từ thư mục cục bộ (Local)

![Giao diện hệ thống (Local)](./assets/screenshot.png)

> 💡 **Mẹo:** Nếu `image.nvim` hoạt động tốt, bạn sẽ thấy ảnh chú chó hiển
> thị ngay dưới dòng chữ của nó mà không cần mở trình duyệt.

---

## ➌ Tiêu đề cấp 3 (H3) - Định dạng Danh sách & Checkbox

### Danh sách không thứ tự (Unordered List)

- Vật phẩm A
- Vật phẩm B
  - Vật phẩm con B1
  - Vật phẩm con B2

### Danh sách có thứ tự (Ordered List)

1. Bước một: Cấu hình Neovim
2. Bước hai: Cài đặt Imagemagick
3. Bước ba: Tận hưởng thành quả

### Danh sách công việc (Tasklist / Checkbox)

- [x] Đã cấu hình xong `render-markdown.nvim`
- [ ] Chưa cài đặt Terminal Kitty
- [x] Đã test thử ảnh online

---

## ➍ Tiêu đề cấp 4 (H4) - Khối trích dẫn & Code Block

### Blockquote (Trích dẫn)

> "Cấu hình Neovim không phải là một đích đến, đó là một hành trình tinh
> chỉnh không ngừng nghỉ." — _Một Nvim-er ẩn danh_

### Khối Code (Code Block) có Highlight theo ngôn ngữ

```lua
-- File: ~/.config/nvim/lua/plugins/markdown.lua
local image = require("image")
image.setup({
  backend = "kitty",
  download_remote_images = true,
})
```
