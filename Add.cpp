/** \brief Add
 *
 * \param a int
 * \param b int
 * \return int
 *
 */     
int Add(int a, int b)
{
    if(0 == b) return a;    //没有进位的时候完成运算
    int sum,carry;
    sum = a^b;    //完成第一步没有进位的加法运算
    carry = (a&b) << 1;    //完成第二位进位并且左移运算
    return Add(sum, carry);
}