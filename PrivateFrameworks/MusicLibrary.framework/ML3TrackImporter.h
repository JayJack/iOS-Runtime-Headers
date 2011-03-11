/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3MusicLibrary;

@interface ML3TrackImporter : NSObject  {
    ML3MusicLibrary *_library;
}


- (void)dealloc;
- (id)initWithMusicLibrary:(id)arg1;
- (void)importTrack:(id)arg1 withCompletionBlock:(id)arg2;
- (BOOL)updateTrack:(id)arg1 withImportTrack:(id)arg2;
- (id)_addAlbumArtistForImportTrackProperties:(id)arg1;
- (id)_addAlbumForImportTrack:(id)arg1 properties:(id)arg2;
- (id)_addArtistForImportTrackProperties:(id)arg1;
- (id)_addComposerForImportTrackProperties:(id)arg1;
- (id)_addGenreForImportTrackProperties:(id)arg1;
- (id)_addStoreLinkForImportTrackProperties:(id)arg1;
- (id)_newTrackPropertiesByProcessingImportTrack:(id)arg1;
- (BOOL)_shouldInsertITMediaKindIntoPurchasedPlaylist:(unsigned long)arg1;

@end