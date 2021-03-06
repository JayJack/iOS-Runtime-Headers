/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSObject<OS_dispatch_source>, NSString, SKUIActivityIndicatorView, SKUILayoutCache, SKUILoadingTemplateViewElement, SKUIViewElementLayoutContext;

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUIActivityIndicatorView *_activityIndicatorView;
    NSObject<OS_dispatch_source> *_delayTimer;
    SKUILayoutCache *_layoutCache;
    SKUILoadingTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (id)_layoutCache;
- (void)_reloadViewStyling;
- (void)_showActivityIndicator;
- (id)_viewLayoutContext;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
