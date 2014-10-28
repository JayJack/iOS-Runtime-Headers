/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@class NSDate;

@interface CAMNebulaSecondaryState : NSObject <NSCoding> {
    int _failedStateReadAttemptsCount;
    NSDate *_lastMovieWriteAttemptTime;
    int _movieWriteAttemptsCount;
    int _stopReasons;
    NSDate *_stopTime;
}

@property int failedStateReadAttemptsCount;
@property(readonly) NSDate * lastMovieWriteAttemptTime;
@property(readonly) int movieWriteAttemptsCount;
@property int stopReasons;
@property(retain) NSDate * stopTime;

+ (id)secondaryStateWithContentsOfFile:(id)arg1;

- (void).cxx_destruct;
- (BOOL)addStopReasons:(int)arg1 stopTime:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)failedStateReadAttemptsCount;
- (id)initWithCoder:(id)arg1;
- (id)lastMovieWriteAttemptTime;
- (int)movieWriteAttemptsCount;
- (void)notifyWillAttemptToWriteMovie;
- (void)setFailedStateReadAttemptsCount:(int)arg1;
- (void)setStopReasons:(int)arg1;
- (void)setStopTime:(id)arg1;
- (int)stopReasons;
- (id)stopTime;
- (BOOL)writeToFile:(id)arg1;

@end