/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIColor, CIImage, NSNumber;

@interface CUIOuterBevelEmbossFilter : CIFilter {
    NSNumber *inputAngle;
    CIColor *inputHighlightColor;
    CIImage *inputImage;
    NSNumber *inputRadius;
    CIColor *inputShadowColor;
    NSNumber *inputSize;
    NSNumber *inputSoften;
}

@property(retain) NSNumber * inputAngle;
@property(retain) CIColor * inputHighlightColor;
@property(retain) CIImage * inputImage;
@property(retain) NSNumber * inputRadius;
@property(retain) CIColor * inputShadowColor;
@property(retain) NSNumber * inputSize;
@property(retain) NSNumber * inputSoften;

+ (id)customAttributes;

- (id)_kernel;
- (id)_kernelC;
- (id)inputAngle;
- (id)inputHighlightColor;
- (id)inputImage;
- (id)inputRadius;
- (id)inputShadowColor;
- (id)inputSize;
- (id)inputSoften;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAngle:(id)arg1;
- (void)setInputHighlightColor:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputShadowColor:(id)arg1;
- (void)setInputSize:(id)arg1;
- (void)setInputSoften:(id)arg1;

@end
