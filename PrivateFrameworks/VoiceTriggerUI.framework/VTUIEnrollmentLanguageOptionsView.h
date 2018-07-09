/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIEnrollmentLanguageOptionsView : VTUIEnrollmentStateView <UITextViewDelegate> {
    NSMutableArray * _continueButtons;
    NSArray * _continueButtonsLanguages;
    UITextView * _footerTextView;
    UIView * _footerView;
    <VTUIEnrollmentSetupIntroViewDelegate> * _stateViewDelegate;
}

@property (nonatomic, readonly) NSMutableArray *continueButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <VTUIEnrollmentSetupIntroViewDelegate> *stateViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addContinueButtonsToFooter;
- (id)_createFooter;
- (void)_setupContent;
- (void)_setupImage;
- (id)continueButtons;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)languageSelectionOfContinueButton:(id)arg1;
- (void)setContinueButtonLanguages:(id)arg1;
- (void)setStateViewDelegate:(id)arg1;
- (id)stateViewDelegate;
- (bool)suppressFinishButton;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end