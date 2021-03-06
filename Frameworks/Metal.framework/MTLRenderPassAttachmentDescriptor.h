/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLTexture>, <MTLTextureImplementation>;

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying> {
    struct MTLRenderPassAttachmentDescriptorPrivate { 
        <MTLTextureImplementation> *texture; 
        unsigned int level; 
        unsigned int slice; 
        unsigned int depthPlane; 
        unsigned int loadAction; 
        unsigned int storeAction; 
        struct { 
            double red; 
            double green; 
            double blue; 
            double alpha; 
        } clearColor; 
        double clearDepth; 
        unsigned int clearStencil; 
        <MTLTextureImplementation> *resolveTexture; 
        unsigned int resolveLevel; 
        unsigned int resolveSlice; 
        unsigned int resolveDepthPlane; 
        unsigned int width; 
        unsigned int height; 
    } _private;
}

@property unsigned int depthPlane;
@property unsigned int level;
@property unsigned int loadAction;
@property unsigned int resolveDepthPlane;
@property unsigned int resolveLevel;
@property unsigned int resolveSlice;
@property(retain) <MTLTexture> * resolveTexture;
@property unsigned int slice;
@property unsigned int storeAction;
@property(retain) <MTLTexture> * texture;

+ (id)attachmentDescriptor;

- (const struct MTLRenderPassAttachmentDescriptorPrivate { id x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; struct { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; double x8; unsigned int x9; id x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; }*)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)depthPlane;
- (id)description;
- (id)init;
- (unsigned int)level;
- (unsigned int)loadAction;
- (unsigned int)resolveDepthPlane;
- (unsigned int)resolveLevel;
- (unsigned int)resolveSlice;
- (id)resolveTexture;
- (void)setDepthPlane:(unsigned int)arg1;
- (void)setLevel:(unsigned int)arg1;
- (void)setLoadAction:(unsigned int)arg1;
- (void)setResolveDepthPlane:(unsigned int)arg1;
- (void)setResolveLevel:(unsigned int)arg1;
- (void)setResolveSlice:(unsigned int)arg1;
- (void)setResolveTexture:(id)arg1;
- (void)setSlice:(unsigned int)arg1;
- (void)setStoreAction:(unsigned int)arg1;
- (void)setTexture:(id)arg1;
- (unsigned int)slice;
- (unsigned int)storeAction;
- (id)texture;

@end
