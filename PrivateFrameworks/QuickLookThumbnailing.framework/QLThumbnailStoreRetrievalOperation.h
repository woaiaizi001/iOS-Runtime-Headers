/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailStoreRetrievalOperation : NSOperation {
    unsigned long long _activity;
    QLThumbnailAddition *_addition;
    BOOL _allowsThumbnailGeneration;
    NSURL *_destinationURL;
    NSURL *_documentURL;
    NSError *_error;
    BOOL _executing;
    BOOL _finished;
    BOOL _generateThumbnailsAtBackgroundPriority;
    unsigned long long _generationActivity;
    <QLThumbnailGenerationRequest><NSXPCProxyCreating> *_thumbnailRequest;
    BOOL _thumbnailWasJustAutomaticallyGenerated;
}

@property BOOL allowsThumbnailGeneration;
@property (retain) NSError *error;
@property (getter=isExecuting, nonatomic) BOOL executing;
@property (getter=isFinished, nonatomic) BOOL finished;
@property (readonly) GSAddition *genStoreAddition;
@property BOOL generateThumbnailsAtBackgroundPriority;
@property (readonly) NSData *serializedQuickLookMetadataDictionary;
@property (readonly) NSDictionary *thumbnailImagesDictionary;
@property (readonly) BOOL thumbnailWasAutomaticallyGenerated;
@property (readonly) BOOL thumbnailWasJustAutomaticallyGenerated;

+ (BOOL)canMostRecentClientsGenerateThumbnailsForUTI:(id)arg1;

- (void)_afterThumbnailIsGenerated;
- (void)_finishBecauseGenerationFailedWithUnderlyingError:(id)arg1;
- (BOOL)_finishIfCancelled;
- (void)_finishWithError:(id)arg1;
- (void)_generateThumbnail;
- (void)afterThumbnailIsPutInGenstore;
- (BOOL)allowsThumbnailGeneration;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)genStoreAddition;
- (BOOL)generateThumbnailsAtBackgroundPriority;
- (id)init;
- (id)initWithDocumentAtURL:(id)arg1;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)issueSandboxExtension;
- (void)main;
- (id)serializedQuickLookMetadataDictionary;
- (void)setAllowsThumbnailGeneration:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setExecuting:(BOOL)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)setGenerateThumbnailsAtBackgroundPriority:(BOOL)arg1;
- (void)start;
- (id)thumbnailImagesDictionary;
- (BOOL)thumbnailWasAutomaticallyGenerated;
- (BOOL)thumbnailWasJustAutomaticallyGenerated;

@end