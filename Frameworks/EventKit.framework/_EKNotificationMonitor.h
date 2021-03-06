/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class EKEventStore, NSArray, NSDate, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSTimer, PCPersistentTimer;

@interface _EKNotificationMonitor : NSObject {
    NSMutableSet *_alertedNotificationsThatFailedToMarkAlerted;
    NSMutableArray *_culledRecentlyRepliedNotifications;
    NSArray *_eventNotificationReferences;
    EKEventStore *_eventStore;
    id _eventStoreGetter;
    BOOL _handlesOnlyEvents;
    BOOL _initialCheck;
    unsigned int _lastEventCount;
    unsigned int _lastReminderCount;
    BOOL _loadRecentlyRepliedNotifications;
    NSDate *_nextFireTime;
    BOOL _pendingChanges;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentlyRepliedNotifications;
    NSArray *_reminderNotificationReferences;
    BOOL _running;
    BOOL _shouldInstallPersistentTimer;
    NSTimer *_syncTimer;
    PCPersistentTimer *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    BOOL _useSyncIdleTimer;
}

@property(readonly) unsigned int eventNotificationCount;
@property(readonly) NSArray * eventNotificationReferences;
@property(readonly) unsigned int notificationCount;
@property(readonly) NSArray * notificationReferences;
@property(readonly) NSArray * reminderNotificationReferences;

- (void)_alertPrefChanged;
- (unsigned int)_checkForEventNotifications:(id)arg1;
- (unsigned int)_checkForReminderNotifications:(id)arg1;
- (void)_databaseChanged;
- (id)_eventStore;
- (void)_killSyncTimer;
- (void)_notificationCountChangedExternally;
- (void)_notifyForUnalertedNotifications:(id)arg1;
- (void)_resetSyncTimer;
- (void)_resetTimer;
- (void)_syncDidEnd;
- (void)_syncDidStart;
- (void)_syncTimerFired:(id)arg1;
- (void)_timerFired;
- (void)adjust;
- (void)attemptReload;
- (void)attemptReloadSynchronously:(BOOL)arg1;
- (void)dealloc;
- (unsigned int)eventNotificationCount;
- (id)eventNotificationReferences;
- (id)init;
- (id)initByHandlingOnlyEvents:(BOOL)arg1 bulletinBoardWithEventStoreGetter:(id)arg2;
- (id)initByHandlingOnlyEvents:(BOOL)arg1 eventStore:(id)arg2;
- (void)killTimer;
- (unsigned int)notificationCount;
- (id)notificationReferences;
- (id)reminderNotificationReferences;
- (void)start;
- (void)stop;

@end
