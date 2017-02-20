/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScanInstance : NSObject <HMFTimerDelegate> {
    id /* block */  _completion;
    BOOL  _fastAgeOut;
    unsigned int  _filterMethod;
    NSObject<OS_dispatch_queue> * _queue;
    HAPWACScanFilter * _scanFilter;
    double  _scanInterval;
    HMFTimer * _scanRepeatTimer;
    NSObject<OS_dispatch_semaphore> * _scanStopSemaphore;
    BOOL  _shouldContinueScan;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fastAgeOut;
@property (nonatomic) unsigned int filterMethod;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HAPWACScanFilter *scanFilter;
@property (nonatomic) double scanInterval;
@property (nonatomic, retain) HMFTimer *scanRepeatTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *scanStopSemaphore;
@property (nonatomic) BOOL shouldContinueScan;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addScanRequest;
- (void)_handleFastAgeOutChange;
- (id /* block */)completion;
- (void)dealloc;
- (BOOL)fastAgeOut;
- (unsigned int)filterMethod;
- (id)initWithFilter:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (id)scanFilter;
- (double)scanInterval;
- (id)scanRepeatTimer;
- (id)scanStopSemaphore;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFastAgeOut:(BOOL)arg1;
- (void)setFilterMethod:(unsigned int)arg1;
- (void)setQueue:(id)arg1;
- (void)setScanFilter:(id)arg1;
- (void)setScanInterval:(double)arg1;
- (void)setScanRepeatTimer:(id)arg1;
- (void)setScanStopSemaphore:(id)arg1;
- (void)setShouldContinueScan:(BOOL)arg1;
- (BOOL)shouldContinueScan;
- (void)startWACScan;
- (void)stopWACScan;
- (void)timerDidFire:(id)arg1;

@end