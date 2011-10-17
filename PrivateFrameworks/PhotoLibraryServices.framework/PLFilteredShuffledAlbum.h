/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSPredicate;

@interface PLFilteredShuffledAlbum : PLShuffledAlbum  {
    int _filter;
    NSPredicate *_filterPredicate;
}

@property(readonly) int filter;
@property(readonly) NSPredicate * filterPredicate;

+ (struct NSObject { Class x1; }*)_shuffledAlbumWithAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 startingAsset:(id)arg3;

- (id)filterPredicate;
- (int)filter;
- (void)createShuffledIndexesMaps;
- (struct NSObject { Class x1; }*)unshuffledAlbum;
- (id)initWithBackingAlbum:(struct NSObject { Class x1; }*)arg1 filter:(int)arg2 startingAsset:(id)arg3;
- (unsigned int)count;
- (void)dealloc;

@end