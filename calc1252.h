/**
 * @file
 * @brief This header file provides a bunch of defines related to the Windows
 * 1252 and Calc-1252 8-bit character encodings.
 *
 * All defines start with CALC1252_.  Many (but not all) come in two forms:
 * a string-form and a _CHAR form.  The string form may be used like so:
 * @code
 * fontlib_DrawString(CALC1252_pi " is about 3.14159265.");
 * @endcode
 * This works because C and C++ treat two strings with no intervening syntax
 * (other than whitespace) as being a single string, e.g. the following are
 * exactly equivalent:
 * @code
 * printf("asdf" "jkl");
 * printf("asdfjkl");
 * @endcode
 * The _CHAR form of an equate has the exact same name, except appended with
 * _CHAR, and may be used as a character or integer literal value.
 *
 * All names are all uppercase, except for the names of specifically lowercase
 * characters.  For example, CALC1252_N_TILDE is the uppercase of
 * CALC1252_n_TILDE.  For character names with more than one letter, all letters
 * are lowercased, e.g. CALC1252_lambda is lowercase while CALC1252_LAMBDA is
 * uppercase.
 *
 * @author DrDnar
 */
/* This is just a bunch of #defines so . . . might as well use one as the header guard. */
#ifndef CALC1252_CURSOR_BLANK_CHAR
#define CALC1252_CURSOR_BLANK_CHAR '\000' /**< Blank glyph the same width as every cursor. */
#define CALC1252_CURSOR_SHADED "\001" /**< Alternating dots pattern, often used to indicate a text box is full. */
#define CALC1252_CURSOR_SHADED_CHAR '\001'
#define CALC1252_CURSOR_LINE "\002" /**< A vertical line. */
#define CALC1252_CURSOR_LINE_CHAR '\002'
#define CALC1252_CURSOR_UNDERLINE "\003" /**< A thicker underscore. */
#define CALC1252_CURSOR_UNDERLINE_CHAR '\003'
#define CALC1252_CURSOR_BLOCK "\004" /**< A large solid black rectange, like the normal TI cursor. */
#define CALC1252_CURSOR_BLOCK_CHAR '\004'
#define CALC1252_CURSOR_2ND "\005"
#define CALC1252_CURSOR_2ND_CHAR '\005'
#define CALC1252_CURSOR_ALPHA "\006"
#define CALC1252_CURSOR_ALPHA_CHAR '\006'
#define CALC1252_CURSOR_alpha "\007"
#define CALC1252_CURSOR_alpha_CHAR '\007'
#define CALC1252_CURSOR_INSERT "\010"
#define CALC1252_CURSOR_INSERT_CHAR '\010'
#define CALC1252_CURSOR_2ND_INSERT "\011"
#define CALC1252_CURSOR_2ND_INSERT_CHAR '\011'
#define CALC1252_CURSOR_ALPHA_INSERT "\012"
#define CALC1252_CURSOR_ALPHA_INSERT_CHAR '\012'
#define CALC1252_CURSOR_alpha_INSERT "\013"
#define CALC1252_CURSOR_alpha_INSERT_CHAR '\013'
#define CALC1252_CURSOR_UP "\014"
#define CALC1252_CURSOR_UP_CHAR '\014'
#define CALC1252_CURSOR_DOWN "\015"
#define CALC1252_CURSOR_DOWN_CHAR '\015'
#define CALC1252_CURSOR_LEFT "\016"
#define CALC1252_CURSOR_LEFT_CHAR '\016'
#define CALC1252_CURSOR_RIGHT "\017"
#define CALC1252_CURSOR_RIGHT_CHAR '\017'
#define CALC1252_ARROW_UP "\020"
#define CALC1252_ARROW_UP_CHAR '\020'
#define CALC1252_ARROW_DOWN "\021"
#define CALC1252_ARROW_DOWN_CHAR '\021'
#define CALC1252_ARROW_LEFT "\022"
#define CALC1252_ARROW_LEFT_CHAR '\022'
#define CALC1252_ARROW_RIGHT "\023" 
#define CALC1252_ARROW_RIGHT_CHAR '\023'
#define CALC1252_ARROW_LEFT_RIGHT "\024"
#define CALC1252_ARROW_LEFT_RIGHT_CHAR '\024'
#define CALC1252_RADIO_UNCHECKED "\025"
#define CALC1252_RADIO_UNCHECKED_CHAR '\025'
#define CALC1252_RADIO_CHECKED "\026"
#define CALC1252_RADIO_CHECKED_CHAR '\026'
#define CALC1252_INTEGRAL "\027"
#define CALC1252_INTEGRAL_CHAR '\027'
#define CALC1252_THERE_EXISTS "\030"
#define CALC1252_THERE_EXISTS_CHAR '\030'
#define CALC1252_FOR_ALL "\031"
#define CALC1252_FOR_ALL_CHAR '\031'
#define CALC1252_THEREFORE "\032"
#define CALC1252_THEREFORE_CHAR '\032'
#define CALC1252_SQUARE_ROOT "\033"
#define CALC1252_SQUARE_ROOT_CHAR '\033'
#define CALC1252_LESS_THAN_OR_EQUAL_TO "\034"
#define CALC1252_LESS_THAN_OR_EQUAL_TO_CHAR '\034'
#define CALC1252_APPROXIMATELY "\035"
#define CALC1252_APPROXIMATELY_CHAR '\035'
#define CALC1252_GREATER_THAN_OR_EQUAL_TO "\036"
#define CALC1252_GREATER_THAN_OR_EQUAL_TO_CHAR '\036'
#define CALC1252_NOT_EQUAL_TO "\037"
#define CALC1252_NOT_EQUAL_TO_CHAR '\037'
#define CALC1252_INFINITY "\177"
#define CALC1252_INFINITY_CHAR '\177'
#define CALC1252_EURO "\200"
#define CALC1252_EURO_CHAR '\200'
#define CALC1252_pi "\201"
#define CALC1252_pi_CHAR '\201'
#define CALC1252_LOW_QUOTE "\202"
#define CALC1252_LOW_QUOTE_CHAR '\202'
#define CALC1252_epsilon "\203"
#define CALC1252_epsilon_CHAR '\203'
#define CALC1252_LOW_DOUBLE_QUOTE "\204"
#define CALC1252_LOW_DOUBLE_QUOTE_CHAR '\204'
#define CALC1252_alpha "\205"
#define CALC1252_alpha_CHAR '\205'
#define CALC1252_DAGGER "\206"
#define CALC1252_DAGGER_CHAR '\206'
#define CALC1252_DOUBLE_DAGGER "\207"
#define CALC1252_DOUBLE_DAGGER_CHAR '\207'
#define CALC1252_GAMMA "\210"
#define CALC1252_GAMMA_CHAR '\210'
#define CALC1252_PER_MILLE "\211"
#define CALC1252_PER_MILLE_CHAR '\211'
#define CALC1252_S_CARON "\212"
#define CALC1252_LEFT_ANGLE_QUOTE "\213"
#define CALC1252_LEFT_ANGLE_QUOTE_CHAR '\213'
#define CALC1252_OE "\214"
#define CALC1252_SIGMA "\215"
#define CALC1252_SIGMA_CHAR '\215'
#define CALC1252_Z_CARON "\216"
#define CALC1252_phi "\217"
#define CALC1252_phi_CHAR '\217'
#define CALC1252_PI "\220"
#define CALC1252_PI_CHAR '\220'
#define CALC1252_LEFT_QUOTE "\221"
#define CALC1252_LEFT_QUOTE_CHAR '\221'
#define CALC1252_RIGHT_QUOTE "\222"
#define CALC1252_RIGHT_QUOTE_CHAR '\222'
#define CALC1252_LEFT_DOUBLE_QUOTE "\223"
#define CALC1252_LEFT_DOUBLE_QUOTE_CHAR '\223'
#define CALC1252_RIGHT_DOUBLE_QUOTE "\224"
#define CALC1252_RIGHT_DOUBLE_QUOTE_CHAR '\224'
#define CALC1252_BULLET "\225"
#define CALC1252_BULLET_CHAR '\225'
#define CALC1252_EN_DASH "\226"
#define CALC1252_EN_DASH_CHAR '\226'
#define CALC1252_EM_DASH "\227"
#define CALC1252_EM_DASH_CHAR '\227'
#define CALC1252_gamma "\230"
#define CALC1252_gamma_CHAR '\230'
#define CALC1252_xi "\231"
#define CALC1252_xi_CHAR '\231'
#define CALC1252_s_CARON "\232"
#define CALC1252_RIGHT_ANGLE_QUOTE "\233"
#define CALC1252_RIGHT_ANGLE_QUOTE_CHAR '\233'
#define CALC1252_oe "\234"
#define CALC1252_sigma "\235"
#define CALC1252_sigma_CHAR '\235'
#define CALC1252_z_CARON "\236"
#define CALC1252_Y_DIAERESIS "\237"
#define CALC1252_NON_BREAKING_SPACE "\240"
#define CALC1252_NON_BREAKING_SPACE_CHAR '\240'
#define CALC1252_INVERTED_EXCLAMATION_MARK "\241"
#define CALC1252_INVERTED_EXCLAMATION_MARK_CHAR '\241'
#define CALC1252_CENT "\242"
#define CALC1252_CENT_CHAR '\242'
#define CALC1252_POUND_STERLING "\243"
#define CALC1252_POUND_STERLING_CHAR '\243'
#define CALC1252_CURRENCY "\244"
#define CALC1252_CURRENCY_CHAR '\244'
#define CALC1252_OMEGA "\245"
#define CALC1252_OMEGA_CHAR '\245'
#define CALC1252_omega "\246"
#define CALC1252_omega_CHAR '\246'
#define CALC1252_SECTION "\247"
#define CALC1252_SECTION_CHAR '\247'
#define CALC1252_LAMBDA "\250"
#define CALC1252_LAMBDA_CHAR '\250'
#define CALC1252_eta "\251"
#define CALC1252_eta_CHAR '\251'
#define CALC1252_FEMININE_ORDINAL "\252"
#define CALC1252_FEMININE_ORDINAL_CHAR '\252'
#define CALC1252_LEFT_DOUBLE_ANGLE_QUOTE "\253"
#define CALC1252_LEFT_DOUBLE_ANGLE_QUOTE_CHAR '\253'
#define CALC1252_NOT "\254"
#define CALC1252_NOT_CHAR '\254'
#define CALC1252_MINUS "\255"
#define CALC1252_MINUS_CHAR '\255'
#define CALC1252_DELTA "\256"
#define CALC1252_DELTA_CHAR '\256'
#define CALC1252_delta "\257"
#define CALC1252_delta_CHAR '\257'
#define CALC1252_DEGREE "\260"
#define CALC1252_DEGREE_CHAR '\260'
#define CALC1252_PLUS_MINUS "\261"
#define CALC1252_PLUS_MINUS_CHAR '\261'
#define CALC1252_SUPERSCRIPT_2 "\262"
#define CALC1252_SUPERSCRIPT_2_CHAR '\262'
#define CALC1252_SUPERSCRIPT_3 "\263"
#define CALC1252_SUPERSCRIPT_3_CHAR '\263'
#define CALC1252_theta "\264"
#define CALC1252_theta_CHAR '\264'
#define CALC1252_mu "\265"
#define CALC1252_mu_CHAR '\265'
#define CALC1252_PILLCROW "\266"
#define CALC1252_PILLCROW_CHAR '\266'
#define CALC1252_DOT "\267"
#define CALC1252_DOT_CHAR '\267'
#define CALC1252_lambda "\270"
#define CALC1252_lambda_CHAR '\270'
#define CALC1252_SUPERSCRIPT_1 "\271"
#define CALC1252_SUPERSCRIPT_1_CHAR '\271'
#define CALC1252_MASCULINE_ORDINAL "\272"
#define CALC1252_MASCULINE_ORDINAL_CHAR '\272'
#define CALC1252_RIGHT_DOUBLE_ANGLE_QUOTE "\273"
#define CALC1252_RIGHT_DOUBLE_ANGLE_QUOTE_CHAR '\273'
#define CALC1252_ONE_QUARTER "\274"
#define CALC1252_ONE_QUARTER_CHAR '\274'
#define CALC1252_ONE_HALF "\275"
#define CALC1252_ONE_HALF_CHAR '\275'
#define CALC1252_THREE_QUARTERS "\276"
#define CALC1252_THREE_QUARTERS_CHAR '\276'
#define CALC1252_INVERTED_QUESTION_MARK "\277"
#define CALC1252_INVERTED_QUESTION_MARK_CHAR '\277'
#define CALC1252_A_GRAVE "\300"
#define CALC1252_A_ACUTE "\301"
#define CALC1252_A_CIRCUMFLEX "\302"
#define CALC1252_A_TILDE "\303"
#define CALC1252_A_DIAERESIS "\304"
#define CALC1252_A_RING_ABOVE "\305"
#define CALC1252_AE "\306"
#define CALC1252_C_CEDILLA "\307"
#define CALC1252_E_GRAVE "\310"
#define CALC1252_E_ACUTE "\311"
#define CALC1252_E_CIRCUMFLEX "\312"
#define CALC1252_E_DIAERESIS "\313"
#define CALC1252_I_GRAVE "\314"
#define CALC1252_I_ACUTE "\315"
#define CALC1252_I_CIRCUMFLEX "\316"
#define CALC1252_I_DIAERESIS "\317"
#define CALC1252_ETH "\320"
#define CALC1252_N_TILDE "\321"
#define CALC1252_O_GRAVE "\322"
#define CALC1252_O_ACUTE "\323"
#define CALC1252_O_CIRCUMFLEX "\324"
#define CALC1252_O_TILDE "\325"
#define CALC1252_O_DIAERESIS "\326"
#define CALC1252_MULTIPLY "\327"
#define CALC1252_MULTIPLY_CHAR '\327'
#define CALC1252_O_STROKE "\330"
#define CALC1252_U_GRAVE "\331"
#define CALC1252_U_ACUTE "\332"
#define CALC1252_U_CIRCUMFLEX "\333"
#define CALC1252_U_DIAERESIS "\334"
#define CALC1252_Y_ACUTE "\335"
#define CALC1252_THORN "\336"
#define CALC1252_eszett "\337"
#define CALC1252_a_GRAVE "\340"
#define CALC1252_a_ACUTE "\341"
#define CALC1252_a_CIRCUMFLEX "\342"
#define CALC1252_a_TILDE "\343"
#define CALC1252_a_DIAERESIS "\344"
#define CALC1252_a_RING_ABOVE "\345"
#define CALC1252_ae "\346"
#define CALC1252_c_CEDILLA "\347"
#define CALC1252_e_GRAVE "\350"
#define CALC1252_e_ACUTE "\351"
#define CALC1252_e_CIRCUMFLEX "\352"
#define CALC1252_e_DIAERESIS "\353"
#define CALC1252_i_GRAVE "\354"
#define CALC1252_i_ACUTE "\355"
#define CALC1252_i_CIRCUMFLEX "\356"
#define CALC1252_i_DIAERESIS "\357"
#define CALC1252_eth "\360"
#define CALC1252_n_TILDE "\361"
#define CALC1252_o_GRAVE "\362"
#define CALC1252_o_ACUTE "\363"
#define CALC1252_o_CIRCUMFLEX "\364"
#define CALC1252_o_TILDE "\365"
#define CALC1252_o_DIAERESIS "\366"
#define CALC1252_DIVIDE "\367"
#define CALC1252_DIVIDE_CHAR '\367'
#define CALC1252_o_STROKE "\370"
#define CALC1252_u_GRAVE "\371"
#define CALC1252_u_ACUTE "\372"
#define CALC1252_u_CIRCUMFLEX "\373"
#define CALC1252_u_DIAERESIS "\374"
#define CALC1252_y_ACUTE "\375"
#define CALC1252_thorn "\376"
#define CALC1252_y_DIAERESIS "\377"
#endif
