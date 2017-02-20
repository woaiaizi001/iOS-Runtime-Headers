/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSHardwareButtonService : SBSAbstractSystemService {
    NSMutableArray * _consumers;
    unsigned int  _eventMask;
    int  _maximumPriority;
}

@property (nonatomic, retain) NSMutableArray *consumers;
@property (nonatomic) unsigned int eventMask;
@property (nonatomic) int maximumPriority;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addEventConsumerInfo:(id)arg1;
- (void)_mainQueue_handleButtonPressMessage:(int)arg1 forButtonKind:(int)arg2 priority:(int)arg3;
- (void)_resetEventMask;
- (void)_setApplicationClientEventMask:(unsigned int)arg1 priority:(int)arg2;
- (id)_viableConsumerForEvent:(int)arg1 priority:(int)arg2;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(id /* block */)arg2;
- (id)beginConsumingPressesForButtonKind:(int)arg1 eventConsumer:(id)arg2 priority:(int)arg3;
- (void)consumerInfoWillInvalidate:(id)arg1;
- (id)consumers;
- (id)description;
- (unsigned int)eventMask;
- (void)fetchHapticTypeForButtonKind:(int)arg1 completion:(id /* block */)arg2;
- (void)handleButtonPressMessage:(int)arg1 forButtonKind:(int)arg2 priority:(int)arg3;
- (int)maximumPriority;
- (void)setConsumers:(id)arg1;
- (void)setEventMask:(unsigned int)arg1;
- (void)setHapticType:(int)arg1 forButtonKind:(int)arg2;
- (void)setMaximumPriority:(int)arg1;

@end