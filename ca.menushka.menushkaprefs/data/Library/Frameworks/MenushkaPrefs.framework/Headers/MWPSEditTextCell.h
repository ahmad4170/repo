#import <Preferences/PSTableCell.h>

@interface PSEditableTableCell : PSTableCell
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
-(id)textField;
@end

@interface MWPSEditTextCell : PSEditableTableCell
- (void)setDisabledStyle:(BOOL)value;
- (void)setValue:(NSString *)value;
@end
