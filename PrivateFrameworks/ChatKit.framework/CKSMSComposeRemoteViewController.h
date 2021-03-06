/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class <CKSMSComposeRemoteViewControllerDelegate>, NSString;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate> {
    <CKSMSComposeRemoteViewControllerDelegate> *_delegate;
}

@property(copy,readonly) NSString * debugDescription;
@property <CKSMSComposeRemoteViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

+ (id)exportedInterface;
+ (id)requestViewControllerWithConnectionHandler:(id)arg1;
+ (id)serviceViewControllerInterface;

- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)smsComposeControllerAppeared;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerDataInserted;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
