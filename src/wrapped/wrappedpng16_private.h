#if !(defined(GO) && defined(GOM) && defined(GO2) && defined(DATA))
# error meh!
#endif

GO(png_create_write_struct, pFpppp)
GOM(png_destroy_write_struct, vFEpp)
GO(png_write_row, vFpp)
GO(png_set_compression_level, vFpi)
GO(png_set_tIME, vFppp)
GO(png_set_IHDR, vFppuuiiiii)
GO(png_write_end, vFpp)
GO(png_write_chunk, vFpppu)
GO(png_convert_from_time_t, vFpu)
GO(png_create_info_struct, pFp)
GO(png_init_io, vFpp)
GO(png_set_PLTE, vFpppi)
GO(png_write_info, vFpp)
GO(png_set_strip_16, vFp)
GO(png_read_image, vFpp)
GO(png_set_expand_gray_1_2_4_to_8, vFp)
GO(png_error, vFpp)
GO(png_read_end, vFpp)
GO(png_set_longjmp_fn, pFppu)   //TODO: need wrapping?
GO(png_set_tRNS_to_alpha, vFp)
GOM(png_set_read_fn, vFEppp)
GOM(png_set_read_user_transform_fn, vFEpp)
GO(png_set_interlace_handling, iFp)
GO(png_set_filler, vFpui)
GO(png_read_info, vFpp)
GOM(png_destroy_read_struct, vFEppp)
GO(png_set_gray_to_rgb, vFp)
GO(png_set_palette_to_rgb, vFp)
GO(png_get_error_ptr, pFp)
GO(png_get_io_ptr, pFp)
GO(png_get_IHDR, uFppppppppp)
GO(png_read_update_info, vFpp)
GO(png_set_packing, vFp)
GO(png_create_read_struct, pFpppp)
GO(png_destroy_read_struct, vFppp)
GO(png_set_packswap, vFp)
GO(png_get_valid, uFppu)
GO(png_get_image_width, uFpp)
GO(png_get_rows, pFpp)
GO(png_get_color_type, CFpp)
GO(png_read_png, vFppip)
GO(png_get_image_height, uFpp)
GO(png_sig_cmp, iFpuu)
GO(png_write_png, vFppip)
GO(png_malloc, pFpu)
GO(png_set_rows, vFppp)
GO(png_set_expand, vFp)
GO(png_set_sig_bytes, vFpi)
GO(png_free, vFpp)
GOM(png_set_write_fn, vFEppp)
GO(png_get_io_ptr, pFp)