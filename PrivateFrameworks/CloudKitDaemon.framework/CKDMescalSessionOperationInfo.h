/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDMescalSession;

@interface CKDMescalSessionOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    int _serverVersion;
    CKDMescalSession *_session;
}

@property int serverVersion;
@property(retain) CKDMescalSession * session;

- (void).cxx_destruct;
- (int)serverVersion;
- (id)session;
- (void)setServerVersion:(int)arg1;
- (void)setSession:(id)arg1;

@end
