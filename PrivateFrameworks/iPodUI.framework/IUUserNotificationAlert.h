/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;

@interface IUUserNotificationAlert : NSObject {
    id _completionHandler;
    struct dispatch_queue_s { } *_dispatchQueue;
    struct __CFDictionary { } *_notificationDictionary;
    struct __CFUserNotification { } *_userNotification;
}

@property(copy) id completionHandler;
@property(copy) NSString * message;
@property(copy) NSString * title;

- (void)_cancelUserNotification;
- (void)_dismissWithResponseDictionary:(id)arg1 flags:(unsigned long)arg2;
- (void)_redisplayIfNeeded;
- (void)_setValue:(id)arg1 forUserNotificationKey:(struct __CFString { }*)arg2;
- (id)buttonTitleForKey:(struct __CFString { }*)arg1;
- (void)cancel;
- (id)completionHandler;
- (void)dealloc;
- (id)init;
- (id)message;
- (void)setButtonTitle:(id)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setCompletionHandler:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)show;
- (id)title;

@end