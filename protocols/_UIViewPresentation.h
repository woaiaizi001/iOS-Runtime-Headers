/* Generated by RuntimeBrowser.
 */

@protocol _UIViewPresentation <NSObject>

@required

- (void)addSubview:(id <_UIViewPresentation>)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (struct CGPoint { float x1; float x2; })position;
- (void)removeFromSuperview;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setSubviews:(NSArray *)arg1;
- (void)setSuperview:(id <_UIViewPresentation>)arg1;
- (NSArray *)subviews;
- (<_UIViewPresentation> *)superview;
- (UIView *)view;

@end