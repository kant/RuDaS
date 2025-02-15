#ifdef	CHECK_SECURITY
extern PREDICATE check_security();
#endif
extern STRING strsave();
extern POINTER a_dalloc();
extern POINTER cnt_alloc();
extern ITEM h_create();
extern LIST *h_in();
extern LIST *h_keyin();
extern ITEM l_pop();
extern LIST *l_end();
extern ITEM l_append();
extern ITEM l_reverse();
extern BLOCK b_create();
extern ITEM b_add();
extern ITEM b_rem();
extern ITEM b_allones();
extern PREDICATE b_disjoint();
extern ITEM i_fread();
extern ITEM i_ttyread();
extern ITEM i_create();
extern LONG i_cmp();
extern ITEM i_copy();
extern ITEM i_inc();
extern ITEM i_dec();
extern ITEM i_sortc();
extern LIST q_sort();
extern ITEM set_int();
extern ITEM set_uni();
extern ITEM set_sub();
extern ITEM i_put();
extern PREDICATE i_get();
extern FUNC f_create();
extern ITEM f_ltof();
extern ITEM f_ftol();
extern FILEREC *frecreate();
extern FILEREC *frecopen();
extern LONG h_hash();
extern LONG add_hfn();
extern LIST *h_gen();
extern ITEM f_elem();
extern double *r_create();
extern PREDICATE lalphanum();
extern PREDICATE h_keyeq();
extern ITEM p_ttyread();
extern ITEM cl_read();
extern ITEM cl_fread();
extern ITEM p_read();
extern ITEM exp_read();
extern ITEM exp_fread();
extern ITEM cl_ttyread();
extern ITEM *h_ins();
extern ITEM ct_lgg();
extern ITEM ct_terms();
extern ITEM cl_vars();
extern ITEM ct_blits();
extern ITEM ct_blits1();
extern ITEM ct_bestpr();
extern ITEM ct_hyp();
extern ITEM ct_vlits();
extern ITEM ct_nlgg();
extern ITEM l_copy();
extern ITEM f_copy();
extern double cputime();
extern LONG datetime();
extern int l_rem();
extern LIST *l_ins();
extern ITEM l_push();
extern LONG QP_ston();
extern STRING QP_ntos();
extern LONG QP_ntoa();
extern ITEM i_swap();
extern ITEM i_tup2();
extern ITEM i_tup3();
extern ITEM i_tup4();
extern LONG b_size();
extern PREDICATE b_memq();
extern ITEM b_stob();
extern ITEM b_btos();
extern ITEM b_spcreate();
extern BLOCK b_create();
extern ITEM b_int();
extern ITEM b_sub();
extern ITEM b_uni();
extern PREDICATE b_subseteq();
extern ITEM b_copy();
extern ITEM y_copy();
extern ITEM R_copy();
extern PREDICATE b_emptyq();
extern LONG b_first();
extern LONG b_ith();
extern ITEM b_elem();
extern FUNC f_zero();
extern ITEM *f_ins();
extern ITEM cl_subduce();
extern ITEM b_sample();
extern LONG l_length();
extern BLOCK b_bitsum();
extern struct otree *ot_sample();
extern ITEM cl_ureduce();
extern unsigned long int *y_create();
extern LONG fsym();
extern LONG ct_cost();
extern LONG cl_cost();
extern LONG cl_costs();
extern BLOCK y_ins();
extern double *R_ins();
extern ITEM cl_sread();
extern ITEM ct_apply();
extern PREDICATE l_interp();
extern ITEM l_empty();
extern ITEM l_suf();
extern char ttychline();
extern ITEM p_copy();
extern LONG isqrt();
extern ITEM ccl_read();
extern ITEM ccl_ttyread();
extern ITEM ccl_fread();
extern ITEM ccl_sread();
extern ITEM ct_skolem();
extern ITEM cl_skolem();
extern ITEM d_tredundant();
extern ITEM d_tredundant1();
extern d_pushfores();
extern ITEM d_creduce();
extern ITEM d_sample();
extern ITEM l_ltop();
extern ITEM l_ptol();
extern LONG cl_sigatom();
extern PREDICATE cl_pnupdate();
extern LONG cl_bestlit();
extern PREDICATE ct_call();
extern PREDICATE ct_skolq();
extern PREDICATE unify();
extern PREDICATE plg_debug();
extern LONG plg_depth();
extern PREDICATE d_groundcall();
extern ITEM l_elem();
extern ITEM l_ltopc();
extern ITEM exp_sread();
extern double cl_pcoverage();
extern ITEM d_gcpush();
extern ITEM l_pctol();
extern ITEM l_pctol1();
extern LONG pf_ins();
extern LONG r_get();
extern PREDICATE s_ugrecq();
extern ITEM ct_bvars();
extern double c_fraction();
extern double cl_ncoverage();
extern double R_pop();
extern double R_top();
extern LONG r_intof();
extern LONG bcl_costs();
extern PREDICATE d_cimplied();
extern ITEM c_cpclosure();
extern ITEM c_stickelise();
extern ITEM c_mdesp();
extern LONG cl_vmax();
extern double *R_create();
