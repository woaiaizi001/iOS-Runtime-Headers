/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoQueue : NSObject <SXVideoQueue, SXVideoQueueDiffing> {
    <SXVideo> * _video;
    NSOrderedSet * _videos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXVideo> *firstVideo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXVideo> *lastVideo;
@property (nonatomic, readonly) <SXVideo> *nextVideo;
@property (nonatomic, readonly) <SXVideo> *previousVideo;
@property (readonly) Class superclass;
@property (nonatomic, retain) <SXVideo> *video;
@property (nonatomic, copy) NSOrderedSet *videos;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)diffWithQueue:(id)arg1;
- (id)firstVideo;
- (unsigned long long)hash;
- (unsigned long long)indexOfVideo:(id)arg1;
- (id)initWithVideos:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastVideo;
- (id)nextVideo;
- (id)nextVideoOfType:(unsigned long long)arg1;
- (unsigned long long)numberOfVideos;
- (id)previousVideo;
- (id)previousVideoOfType:(unsigned long long)arg1;
- (void)setVideo:(id)arg1;
- (void)setVideos:(id)arg1;
- (id)video;
- (id)videoAfterVideo:(id)arg1;
- (id)videoAtIndex:(unsigned long long)arg1;
- (id)videoBeforeVideo:(id)arg1;
- (id)videos;

@end