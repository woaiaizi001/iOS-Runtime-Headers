/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding> {
    double _t0;
    float _values[8];
}

@property(readonly) float lastDay;
@property(readonly) float lastHour;
@property(readonly) float lastMinute;

+ (bool)supportsSecureCoding;

- (double)_timeToLoseAmount:(float)arg1 count:(int)arg2;
- (float)availableBudgetWithDefaults:(id)arg1;
- (void)clear;
- (void)consume:(float)arg1;
- (id)debugDescriptionWithDefaults:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)lastDay;
- (float)lastHour;
- (float)lastMinute;
- (double)nextDateWithBudgetWithDefaults:(id)arg1;
- (void)updateForTime:(double)arg1;

@end