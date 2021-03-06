/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@class MFIMAPConnection, MFLibraryIMAPStore, NSArray, NSMutableArray, NSString;

@interface MFBaseSyncResponseQueue : MFBufferedQueue {
    MFIMAPConnection *_connection;
    unsigned int _currentUID;
    BOOL _isSearching;
    NSArray *_libraryDetails;
    NSMutableArray *_missingUIDs;
    BOOL _shouldCompact;
    BOOL _shouldFetch;
    MFLibraryIMAPStore *_store;
    NSString *_url;
}

- (void)dealloc;
- (unsigned long long)flagsForItem:(id)arg1;
- (BOOL)handleItems:(id)arg1;
- (id)init;
- (id)sequenceIdentifierForItem:(id)arg1;
- (BOOL)shouldSyncFlags;
- (unsigned int)uidForItem:(id)arg1;

@end
