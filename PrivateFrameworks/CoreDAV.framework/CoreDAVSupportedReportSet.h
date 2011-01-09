/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSMutableSet;



@interface CoreDAVSupportedReportSet : CoreDAVItem 
{
    NSMutableSet *_supportedReports;
}

@property(retain) NSMutableSet *supportedReports;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingWithSubItems;
+ (BOOL)errorOnUnknownChildren;

- (void)addSupportedReport:(id)arg1;
- (id)copyCoreDAVParseRules;
- (id)supportedReports;
- (void)setSupportedReports:(id)arg1;
- (id)description;
- (void)dealloc;

@end